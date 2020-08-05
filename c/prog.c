#include<stdio.h>
//#include<conio.h>
int main()
{
    int a[50],b[50],c[50],mid,n,result,sum1=0,sum2=0;
    printf("enter the no of values:");
    scanf("%d",&n);
    printf("enter the values:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        mid=n/2;
    }
    if(n%2!=0)
    {
        mid=(n+1)/2;
         
    }
    for (int i=0;i<mid;i++)
    {
        b[i]=a[i];
        printf("\n%d",b[i]); 
    }
    for (int i=mid;i<n;i++)
    {
        c[i]=a[i];  
        printf("\n%d",c[i]);
    }
    for(int i=0;i<=mid;i++)
    {
        sum1=sum1+b[i];
    }
    for(int i=mid;i<=n;i++)
    {
        sum2=sum2+c[i];
    }
    printf("\nthe sum of first subarray is:%d",sum1);
    printf("\nthe sum of second subarray is:%d",sum2);
    result=sum1-sum2;
    printf("\nthe difference of sum of two sub arrays is %d",result);
    printf("\n");
}