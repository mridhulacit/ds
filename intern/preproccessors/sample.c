#include<stdio.h>
//<> variant will search for the file within <> in system directories
#include<stdio.h>
//by default <> variant will checkout with header guard
//HEADER GUARD//
//piece of code that saves the content of particular header file, without including it twice
//when same header file is included or defined twice, this piece of code checks whether its already defined
//if yes it saves the content without pasting it
//if no then it proceeds
#include"MATHS.h"
//maths.h is self written header file in same directory
//"" is a type of variant in which the file within "" are searched in pwd if not found searches 
//in system directories
#include"MATHS.h"
void main()
{
    int a;
    a=add(2, 3);//now compiler searches for function definition in "maths.h"
    //executes and prints sum
    printf("\nsum is %d\n",a);
}