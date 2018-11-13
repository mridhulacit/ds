#include<iostream>
using namespace std;
template <class T1>
void display(T1 x) //this is invoking with one genric pointer
{
    cout<<"X:"<<x;
}
template<class T2,class T3> //this is invoking with two genric pointers
void disp(T2 y,T3 w)
{
    cout<<"Y;"<<y;
    cout<<"w:"<<w;
}
int main()
{
    disp(11,13);
    disp(1.2,17);
    display(1);
    display(2);
}