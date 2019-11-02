#include<stdio.h>
void main()
{
    int a=1,*ptr,**ptr1,b[50],*p,n,*arr[50];
    char *str,*s;
    char *strings[50];
    ptr=&a;
    printf("\noriginal value and address:%d,%p",a,&a);
    printf("\nvalue of address stored in ptr:%d",*ptr);
    printf("\nvalue in ptr:%p",ptr);
    printf("\naddress of ptr:%p",&ptr);
    //ptr holds the address of a which makes easy to refer a
    //ptr displays value of address it holds on using deference pointer/valueataddress/indirection operator 
    //ptr address is unique which dont have anything to do with the value it holds
    //ptr address can be held by another pointer in this way,
    ptr1=&ptr;
    printf("\nthe value of ptr(first pointer) is:%p",*ptr1);
    printf("\nthe value of address value stored in 1st pointer is:%d",**ptr1);
    printf("\naddress of ptr1(that stores pointer):%p",&ptr1);
    //handling array with pointer
    //and performing arithmetic operations in it( ++,--,=,- )
    printf("\nenter the value of n:");
    scanf("%d",&n);
    printf("\nenter the array values:");
    //POINTER TO ARRAY//
    //here a pointer is pointing to(accessing) elements in array 
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    p=b;//b and &b[0] is same 
    for(int i=0;i<=n;i++)
    {
        printf("\naddress of b[%d] is:%p",i,p);
        printf("\nvalue at b[%d] is:%d\n",i,*p);
        p++;//pointer value increases so that it can move to next position
        //several ways to print array element and its address
        //printf("\narray elements:%d",b[i]);
        //printf("\narray elements:%d",i[b]);
        //printf("\narray elements:%p",b+i);//this prints address of respective i value(index value)
        //printf("\narray elements:%d",*(b+i));
        //printf("\narray elements:%d",*b);
        //b++ will show compilation time error,base address of an array cannot be modified

    }//here pointer is used to access elements in an array and to get its address values
    
    //ARRAY OF POINTERS//
    //array with int values is pointed using array with pointers
    for(int i=0;i<=n;i++)
    {
        arr[i]=&b[i];//pointerarray is storing all the values from an array
        //stroring address values points the array value
    }
    
    for(int i=0;i<=n;i++)
    {
        printf("\nthe address of arr[%d] is:%p",i,arr[i]);
        printf("\nthe value at arr[%d] is:%d\n",i,*arr[i]);
        //arr[i],which means same as accessing arrays
        //pointer to array-where int value (pointer) points to an array
        //array of pointers-an array consists of pointers where each element in that array will 
        //point another array element,
        //both has been executed.
    }
    //pointers to strings
    str="hello";
    printf("\nthe str value is:%s",str);
    printf("\nthe value of stre is:%d",*str);
    
}