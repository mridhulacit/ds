//pointers to unions are also possible
#include<stdio.h>
union sample
{
    int x;
    int y;
};
int main()
{
    union sample s;
    //union sample *t;
    s.x=10;
    printf(s.x);
}