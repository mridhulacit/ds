//#include is macro preprocessor where the appropriate library file is included
// library files can bementioned in two formats angular brackets and quote version
// angular bracket search for libraries in system path whereas quote version searches in user directory 
// and system library directory. include can also have .c files. PREPROCESSING HAPPENS AS FIRST PHASE IN COMPILATION
#include<stdio.h>
//we don't mention datatypes is because it deals with preprocessor and not compiler
//only compiler checks datatypes for its execution 
//when max(a,b) is found by preprocessor it just replaces its function irrespective of datatypes. 

#define max(a,b) ((a>b)?a:b)
//warning: ISO C99 requires whitespace after the macro name
 //if #define PI=3.14 is given the following error occurs

#define PI 3.14
#define M 12
#undef  M
#define M 5
//#define M 2, when its define 2 times it shows redifined error
//now we can use header guard to remove error
#ifndef M
#define M 2
#endif
//HEADER GUARD//
//header guard or include guard or file guard or macro guard
//it checks if the function is undefined if yes it defines the respective function 
//if this is to be checked out throughout we can use the whole code in else part and use endif atlast
//#define S 3
#define N 3
//#ERROR//
//if we fail to define N here then error part is found and compilation process is stoped
#ifndef N 
#error define it first
//#ERROR//
//it indicates error the compiler gives fatal error if error is found 
//and skips compilation process
#endif

void add(int,int);
void prod(int,int);
void func1();
void func2();
//#PRAGMA//
#pragma startup func1//instead of going main() first it makes prod() to get executed
#pragma exit func1//it makes prod() as last executed func 
//pragma startup specifies functions that are needed to be run before prog{before main()}
//func that are needed to run before prog exit
void func1()
{
    printf("\ninside func1");
}
void func2()
{
    printf("\ninside func2");
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("\nthe sum is:%d",z);
    //FUNCTIONS//
    //return (z); if we have an idea of printing it in main() we can call using a var 
    //and this function returns ans to that var 
    //if we are using return we can use int add(int,int)
}
void prod(int m,int n)
{
    printf("\nthe product is:%d",m*n);
}
void main()
{
    float result,r;
    int c,d,e=5,f=4,g,h;
    printf("\ninside main");
    printf("\nEnter the value of r:");
    scanf("%f",&r);
    result=r*PI;
    printf("\nthe result is: %f", result);
    //FUNCTIONS//
    //if floor function is to be used another header file is to included
    //math.h
    c=max(3,4);
    printf("\nthe max value is: %d",c);
    printf("\nthe value of m is:%d",M);
    //HEADER GUARD// //#IFUNDEF// //#ELSE//
    //the value printed here is second value since we undefined the first defined value for M
    //printf("\n the value of m is:%d",M);
    printf("\nthe difference is %d ",e - f);
    //g=add(2,3); 
    //printf("\n the sum is:%d",g); //for int return type val is returned to g and printed here.
    add(2,3); //for void 
    prod(3,4);
    #ifdef S
    printf("\nits defined");
    #else
    printf("\nits undefined");
    //#IFDEF//
    //since we dint define else part code will get executed
    //not only print we can write any code inside this eg,
    d=max(9,8);
    printf("\nthe max no is:%d",d);
    printf("\nenter another value for r:");
    scanf("%f",&r);
    result=r*PI;
    printf("\nsecond result is %f ",result);
    #endif
    //#IF//
    #if M==1
    printf("M value is 1");
    #elif M==2
    printf("M value is 2");
    #else
    printf("\nM value is neither 1 nor 2\n");
    #endif
    
}