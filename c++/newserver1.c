#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h`>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
#define PORT "3490"
#define BACKLOG 10
#define maxUser 10
#define MAX_USERS 10
#define MAX_ANSWER_TIME 10
#define TOTAL_QUES "3"
			
int users[MAX_USERS][3] = {}; 

void sigchld_handler(int s)
{
    while(waitpid(-1, NULL, WNOHANG) > 0);
}


int timer;
void alarm_handler(int s) {
    timer = 0;
}

wrongRecv(ssize_t recvd, ssize_t expctd)
{

    if(recvd != expctd)
    {
        printf("Recvd(%zd) bytes not equal to expected(%zd) bytes\n",recvd,expctd);
       
    }
}

int nextQues(char* quesMsg, int QID)
{
    char ques[40], optA[10], optB[10], optC[10], optD[10], quesId[5];

    sprintf(quesId,"%d",QID);
    strncpy(ques, "This is the question?",22);
    strncpy(optA, "OptionA", 7);    strncpy(optB, "OptionB", 7);    strncpy(optC, "OptionC", 7);    strncpy(optD, "OptionD", 7);
    strncpy(quesMsg,quesId,5);
    strncpy(quesMsg + 05,ques,40);
    strncpy(quesMsg + 45,optA,10);
    strncpy(quesMsg + 55,optB,10);
    strncpy(quesMsg + 65,optC,10);
    strncpy(quesMsg + 75,optD,10);

    return 0;
}
void answerCheck(int fd, char usrResponse[6], int rtt, int timeTaken)
{	
    int responseTime, i;
    char actualAnswer[1];
    char quesId[5];
    printf("fd(%d) quesid(%s) response(%c) rtt(%d) timeTaken(%d)\n", fd, usrResponse, usrResponse[5], rtt, timeTaken );
    strncpy(quesId, usrResponse, 5);
    actualAnswer[0] = 'B';

    if(actualAnswer[0] == usrResponse[5])
    {
        
        responseTime = timeTaken - rtt;
        for(i = 0; i < MAX_USERS; i++) {
            if(users[i][1] == fd) {
                users[i][2] = responseTime;//saving it
              
            }
        }
    }
}

int compareAnswer() {
    int i, min = 2 * MAX_ANSWER_TIME, userIndex;
    for(i = 0; i < MAX_USERS; i++) {
        if(users[i][2] < min) {
            min = users[i][2];
            userIndex = i;
        }
    }
    
    users[userIndex][0]++;

    
    return users[userIndex][1];
}


int totalQues;

int login_setup(int new_fd)
{
    char login_det[16];
    char username[9],password[9], login_statMsg[7], totalQuesMsg[5] = TOTAL_QUES;
    totalQues = atoi(totalQuesMsg);
  
    int userId;

   
    int ssize_t send_ret,recv_ret;

  
    recv_ret = recv(new_fd,login_det,16,0);
    if(recv_ret == 0)
    {
        return -2;
    }
    wrongRecv(recv_ret,16);

 
    
int main(void)
{
    int listen_fd, new_fd; 
    struct addrinfo hints, *servinfo, *p;
    struct sockaddr_storage ser_addr;
    socklen_t sin_size;
    int yes=1;
    char s[INET6_ADDRSTRLEN];
    int rv;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_ANY;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if((rv = getaddrinfo(NULL,PORT, &hints, &servinfo)) != 0){ 
    

   
    for(p = servinfo; p != NULL; p  = p->ai_next){
        if((listen_fd = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1){
            perror("server : socket");
            continue;
        }

        if(setsockopt(listen_fd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1){
            perror("set sockopt");
            exit(1);
        }

        if(bind(listen_fd, p->ai_addr, p->ai_addrlen) == -1){
            close(listen_fd);
            perror("server: bind");
            continue;
        }

        break;
    }

    if(p == NULL) {
        fprintf(stderr, "server:failed to bind\n");
        return 2;
    }

    int i, win_fd;


    int QID = 0;
    int maxQues_Len = 40, maxOpt_len = 10, maxQuesId_len = 5;
    char quesMsg[80], answer[6];
 
    ssize_t time_ques, time_ans;

   
    fdmax = 0;
    FD_ZERO(&master);
    for(i = 0; i < MAX_USERS; i++) {
        if( (new_fd = users[i][1]) != 0){
            FD_SET(new_fd, &master);
            if(new_fd > fdmax)
                fdmax = new_fd;
            printf("%d\n",new_fd);
        }
    }
0
    int c   urrent_rtt;
    
    						
        //for sending questions to all
        for(i = 0; i <= fdmax; i++) {
            

    while(totalQues) {
switch (opt){
	case1:
		printf(“\n %s \n”, question[0]);
	


break;
case 2:
	printf(“\n\n CHECK CORRECT ANSWER”);
	printf(“\n\n%s\n%s”,question[0],opt1(correct_answer[0]);
	printf(“\n\n %s\n%s”,question[1],opt2(correct_answer[1]);
	printf(“\n\n%s\n%s”,question[2],opt3(correct_answer[2]);
	printf(“\n\n%s\n%s”,question[3],opt4(correct_answer[3]);
	printf(“\n\n%s\n%s”,question[4],opt5(correct_answer[4]);
	break;
case 3:
marks=0;
for(i=0;i<=4;i++)
{                        
if(correct_answer[i]+1==response[i]);
{
		marks++;
}
}
printf(“\nOut of 5 score %d”,marks);
break;
} 

}
while(option!=4);
getch();
return 0;
}
printf(“\n%s”,opt[i]);
}
printf(“\n\n enter answer_number:  ”);
scanf(“%d”,&response[0]);
printf(“\n %s \n”,question[1]);
for(i=0;i<3;i++)
{
printf(“\n%s”,opt2[i]);
}
printf(“\n\n enter answer_number :”);
scanf(“%d”,&response[1]);
printf(“\n %s \n”,question[2]);
for(i=0;i<3;i++)
{
printf(“\n%s”,opt3[i]);
}
printf(“\n\n enter answer_number :”);
scanf(“%d”,&response[2]);
printf(“\n %s \n”,question[3]);
for(i=0;i<3;i++)
{
printf(“\n%s”,opt4[i]);
}
time_t cccc = time(NULL);
printf("%s I(%d)\n",ctime(&cccc),i);
win_fd = compareAnswer();
        
    }
    return 0;
}