#include<iostream>
using namespace std;
int main()
{
    int a,*p;
    p=&a;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"the address of a is:"<<p<<endl;
    p++; 
    cout<<"incremented address value:"<<p<<endl;
    p--;
    cout<<"the vakue of a is:"<<*p<<endl;
    cout<<"the address of p is:"<<&p<<endl;
    *p=(*p)/2;
    cout<<"the value of a when divided by 2 is:"<<*p<<endl;
}