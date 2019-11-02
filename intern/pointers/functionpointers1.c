//we have 3 categories
//1.pointer pointing to a function
//2.function takking pointers in its arguments
//3.functions returning pointer variable

//1.pointer pointing to a function//
#include<stdio.h>
int add(int,int);
int sub(int,int);
void main()
{
    int x=100,y=200;
    //if brackets are not used as (*adding)
    //this following error occurs:initialization makes integer from pointer without a cast
    //this pointer is a function pointer that points to the original function
    int (*adding)(int,int);
    //here pointer functiton name is getting initialized to original functions address
    //in same ay we can give more functions but different pointers should be alloted
    //if we try to point 2 or more functions with same pointer then last pointed function only 
    //get executed
    adding =add;
    int (*subtracting)(int,int);
    subtracting =sub;
    //now a variable is calling the original function through a pointer fuction.
    int m=adding(x,y);
    //here we can see usage of functions too...
    //now for same variables we are performing 2 different operations through functions
    //also for diff var we can perform 
    //if we do this without functions length of code and usage of code will become worse
    //now length of code is short where we can use functions for all sort of vaibles
    //same time local var used in function loses its lifetime after execution getting done
    //same var can be reused in code where we dont get any error
    int n=subtracting(x,y);
    //values can be printed using those variables to which values are returned
    printf("\nafter adding:%d",m);
    printf("\nafter subtraction:%d",n);

}
int add(int a,int b)
{
    return(a+b);//this function is returning swapped values to a pointer
}
int sub(int a,int b)
{
    return(a-b);
}