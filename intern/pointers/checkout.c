#include<stdio.h>
void fun(int *ptr);
int main()
{
    int num=50;
    //int **pp;
    //*pp=&num;
    fun(*pp);
    printf("%d,%d",num,**pp);
    return 0;
}
void fun(int *ptr)
{
    *ptr=100;
}