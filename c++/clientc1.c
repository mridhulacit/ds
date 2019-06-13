#include <stdio.h>
//#include <sys/socket.h>
//#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080

int main(int argc, char *argv[])
{
    struct sockaddr_in address;
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};
    sock = socket(AF_INET, SOCK_STREAM, 0);

    //memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    send(sock , argv[1] , strlen(argv[1]) , 0 );
    char answer[100];
    char buff[256];

    while(1){
        valread = read( sock , buffer, 1024);
        buffer[valread]='\0';
        if(strcmp(buffer,"break")==0)
            break;
        printf("%s\n",buffer );
        printf("Enter Answer : ");

        bzero(buff,256);
        fgets(buff,255,stdin);

        send(sock , buff , strlen(buff) , 0 );
        printf("Sent %s\n",buff);
    }
    printf("\nWaiting For results..\n");
     }
    printf("\nWaiting For results..\n");
    valread = read( sock , buffer, 1024);
    buffer[valread]='\0';
    printf("\n%s is the Winnner\n",buffer);
    return 0;
}
