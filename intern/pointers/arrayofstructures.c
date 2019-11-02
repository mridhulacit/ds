#include<stdio.h>
int main()
{
    struct author
    {
        char name[100];
        char secondname[100];
        int  no_of_books;
        int author_age;
    }s[3];//structure variable
    struct author *p=NULL;//structures pointer variable
    //storing details of author through structure variable
    for(int i=0;i<3;i++)
    {
        printf("\nenter authors first name:");
        scanf("%s",s[i].name);
        printf("\nenter second name:");
        scanf("%s",s[i].secondname);
        printf("\nenter no.of books by author:");
        scanf("%d",&s[i].no_of_books);
        printf("\nenter authors age:");
        scanf("%d",&s[i].author_age);
    }
    //accessing and printing details with structure variable
    for(int i=0;i<3;i++)
    {
        printf("\nenter authors first  name:");
        printf("%s",s[i].name);
        printf("\nenter second name:");
        printf("%s",s[i].secondname);
        printf("\nenter no.of books by author:");
        printf("%d",s[i].no_of_books);
        printf("\nenter authors age:\n");
        printf("%d",s[i].author_age);
    }
    p=s;//we cant use &s because its array saying s symbolises it holds first elements address
    for(int i=0;i<3;i++)
    {
        //now lets access array of structures through pointers
        printf("\nenter authors first name through pointer:");
        printf("%s",p->name);
        printf("\nenter secondname name through pointer:");
        printf("%s",p->secondname);
        printf("\nenter no.of books by author through pointer:");
        printf("%d",p->no_of_books);
        printf("\nenter authors age through pointer:");
        printf("%d\n",p->author_age);
        p++;//this increases the adress value,which means it moves to next pointer 
        //so that it points next value
    }
    

}