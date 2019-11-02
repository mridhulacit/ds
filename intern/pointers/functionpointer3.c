//3.function returning pointer variables
//lets take odd or even as example
#include<stdio.h>
int* oddeven(int*,int*);
void main()
{
    int x=5,y=6;
    //we are declaring a pointer in order to store the returned values
    int *a;
    //this a pointer holds the address of the return variables
    //since arguments are also pointers adress values are called here
    a=oddeven(&x,&y);
    //*a gives the value its pointing to which is nothing but returning pointer values
    printf("\neven number is:%d\n",*a);
}
//return type is pointer and arguments are also pointers//
int* oddeven(int *x,int *y)
{
    int m=*x%2;
    int b=*y%2;
    //doubt:if both even
    //now adress of x is passed and stored in pointer a,so when *a is to printed value of x will be printed
    //same for y
    if((m%2) == 0)
    {
        return(x);
    }
    else
    {
        return(y);
    }
}