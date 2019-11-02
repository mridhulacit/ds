//2.functions taking pointers as its arguments//pointers as function arguments
//basic call by reference program is the best example
//here any changes made in formal paramaters i.e,in reference variables will reflect in actual variables
//here pointers are declared and defined in functions,while passing
//address value of respective variables is passed so tht values can be pointed ot
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 100, y = 200;
    printf("x value before swapping %d\n", x);
    printf("y value before swapping %d\n", y);

    swap(&x, &y);//passing address of x and y to swap function
    printf("After Swapping x value:%d\n", x);
    printf("After Swapping y value:%d\n", y);
    return 0;
}
//now *a will hold x value since address of x is passed similarly *b carries y value
void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;//changes made in this reference variable will reflect in actual variable
}