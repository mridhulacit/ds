#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#define PORT “3490”  
#define maxUser 10
#define MAX_USERS 10
#define MAX_ANSWER_TIME 10
#define TOTAL_QUES “3”
int users[MAX_USERS][3] = {};
void sigchld_handler(int s)
{	
while(waitpid(-1,NULL,WNOHANG)>0);
}
int timer;
void alarm_handler(int s)
{
timer=0;
}
wrongRecv(ssize_t recvd,ssize_t expctd)
{
if(recvd!=expctd)
printf(“Recieved(%zd)bytes not equal to expected(%zd) bytes\n”,recvd,expctd);
}
}
int nextQues(char*quesMsg,int QID)
{
char ques[40],optA[10],optB[10],optC[10],optD[10],quesId[5];
printf(quesId,”%d”,QID);
strncpy(ques,”This is the question?”,22);
strncpy(optA,”OptionA”,7);
strncpy(optB,”OptionB”,7);
strncpy(optC,”OptionC”,7);
strncpy(optD,”OptionD”,7);
strncpy(quesMsg,quesId,5);
strncpy(quesMsg + 05,ques,40);
strncpy(quesMsg + 45,optA,10);
strncpy(quesMsg + 55,optB,10);
strncpy(quesMsg + 65,optC,10);
strncpy(quesMsg + 75,optD,10);
return 0;
}
void answerCheck(int fd,char usrResponse[6],int rtt,int timeTaken)
{
int responseTime,I;
 char actualAnswer[1];
char quesId[5];
printf(“fd(%d) quesid(%s) response(%c) rtt(%d) timeTaken(%d)\n”,fd,usrResponse,usrResponse[5],rtt,timeTaken);
strncpy(quesId,usrResponse,5);
actualAnswer[0] = ‘B’;
if(actualAnswer[0] == usrResponse[5])
{
responseTime = timeTaken – rtt;
for(i=0;i<MAX_USERS;i++)
{
if(users[i][1] == fd)
{
users[i][2] = responseTime;
}
}
}
}
int compareAnswer()
{
int I,min =2*MAX_ANSWER_TIME,userIndex;
for(i=0;i<MAX_USERS;i++)
{
if(users[i][2]<min)
{
min = users[i][2];
userIndex = I;
}
}
users[userIndex][0]++;
return users[userIndex][1];
}


