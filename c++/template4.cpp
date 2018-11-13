#include<iostream>
using namespace std;
template <class T>
void show(T a)
{
    cout<<"template a:"<<a<<endl;
}
void show(double a) //here template is overloaded
{
    cout<<"non-template a:"<<a<<endl;
}
int main()
{
    show(11);
    show(11.12);
    show("mridhu");
}