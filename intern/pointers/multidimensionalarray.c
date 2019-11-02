#include<stdio.h>
const int row=3;
const int col=3;
int main()
{
    int a[row][col],*b=NULL,tot,*c[50][50];
    printf("\nenter the values:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }
    tot=row*col;
    for(int j=0;j<tot;j++)
        {
            
            //adress of an element in an array can be printed in this way
            printf("address:%p\n",(a+j));
        }
    //b=*a is also correct
    b=&a[0][0];
    for(int i=0;i<tot;i++)
    {
        //pointer to array-where int value (pointer) points to an array
        //now this pointer can access elements and its address
        //pointer can access element in an array as follows,
        //b is a pointer in which the address of elements is stored 
        //if the same thing is given as (b+i) then address in which pointer is stored fro each element will be printed 
        //to print address of array a, b is used
        //b++;//this increases 4 bytes coz of 32-bit number in which int has 4 bytes
        printf("elements:%d\n",*(b+i));
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j]=&a[i][j];//pointerarray is storing all the values from an array
        //stroring address values points the array value
        }
        
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
    
        //c[i][j],which means same as accessing arrays
        //c[i][j]is a pointer array
        //array of pointers-an array consists of pointers where each element in that array will 
        //point another array element,
        //both has been executed.
            printf("\nthe value  is:%d\n",*(c[i][j]));
        

        }
        
    }
}