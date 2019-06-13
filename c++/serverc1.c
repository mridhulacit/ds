#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <signal.h>
#include <sys/time.h>
#define PORT 8080

int timer;
void alarm_handler(){
    timer = 0;
}
int main()
{
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *brk = "break";
    char *cmp = "completed";
    char strings[3][256];
    char answers[20][256]={"ans1","ans2","ans3","ans4","ans5","ans6","ans7","ans8","ans9","ans10","ans11","ans12","ans13","ans14","ans15","ans16","ans17","ans18","ans19","ans20","ans21","ans22"};
    int count,c2=0;
    int scores[10];

    int max_clients=10,clients[10],max_fd;
    for (int i = 0; i < max_clients; i++)
    {
        clients[i] = 0;
    }
    fd_set readfds;

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt));

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );
     bind(server_fd, (struct sockaddr *)&address,sizeof(address));
    listen(server_fd, 3);

    timer=1;
    signal(SIGALRM,alarm_handler);
    alarm(10);

    while(timer){
        FD_ZERO(&readfds);
        new_socket = accept(server_fd, (struct sockaddr *)&address,(socklen_t*)&addrlen);
        if(new_socket == -1)
            break;
        for (count = 0; count < max_clients; count++)
            {//if position is empty
                                if( clients[count] == 0 )
                {
                    clients[count] = new_socket;
                    printf("Adding to list of sockets as %d\n" , count);
                    valread = read( new_socket , buffer, 1024);
                    // printf("%s\n",buffer);
                    // strings[i]=buffer;
                    strcpy(strings[count],buffer);
                    memset(buffer, 0, sizeof(buffer));
                                        break;
                }
            }
    }
    printf("------Time Over-------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s\n",strings[i]);
    }

    FILE * filePointer;
    filePointer = fopen("ques.txt", "r");
    char * line = NULL;
    size_t len=0;
    ssize_t rea;
    for (int i = 0; i < max_clients; i++)
    {
        if(clients[i] !=0){
            new_socket = clients[i];
                         timer=1;
            alarm(10);

            while (((rea = getline(&line, &len, filePointer)) != -1) && timer==1 ) {
                printf("%s",line);
                c2=c2+1;
                send(new_socket , line , strlen(line) , 0 );

                valread = read(new_socket,buffer,1024);
                buffer[valread-1]='\0';

                printf("|%s|%d",buffer,valread);
                if(strcmp(buffer,answers[c2-1])==0)
                    scores[i] = scores[i]+1;

                memset(line,0,sizeof(line));
                memset(buffer, 0, sizeof(buffer));
                if(timer==1)
                    continue;
                else
                    break;
            }
            send(new_socket , brk , strlen(brk) , 0 );
        }
        else
            break;
    }
    printf("----------Scores----------");
    int max=0;
    char winner[50];

    for(int i=0;i<max_clients;i++){
        if(clients[i] !=0){
            printf("\n%s : %d",strings[i],scores[i]);
            if(scores[i]>max){
                strcpy(winner,strings[i]);
                 max=scores[i];
            }
        }
    }

    for(int i=0;i<max_clients;i++){
        if(clients[i] !=0){
new_socket = clients[i];
               send(new_socket , &winner , strlen(winner) , 0 );
        }
    }
    return 0;
}
    