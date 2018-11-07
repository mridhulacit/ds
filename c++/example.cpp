#include<iostream>
using namespace std;
class head
{
    public:
    int a,b;
    public:
    head()
    {
        cout<<"this is my constructor of base class"<<endl;
    }
    virtual void read()
    {
        cout<<"enter the frist value:"<<endl;
        cin>>a;
        cout<<"enter the second value:"<<endl;
        cin>>b;
    }
    virtual void calculate()
    {
        cout<<"the base class calculation"<<endl;
        a=a+b;
    }
    virtual void display()
    {
        cout<<"the sum of base class is:"<<endl;
        cout<<a;
    }
    ~head()
    {
        cout<<"this is my destructor of base class"<<endl;
    }
};
class tail:public head
{
    virtual void read()
    {
        cout<<"enter a:"<<endl;
        cin>>a;
        cout<<"enter b:"<<endl;
        cin>>b;
    }
    virtual void calculate()
    {
        cout<<"the derived class calculation is"<<endl;
        a=a+b;
    }
    virtual void display()
    {
        cout<<"the derived sum is"<<endl;
        cout<<a;
    }
};
int main()
{
    head *h;
    tail t;
    h = &t;
    h->read();
    h->calculate();
    h->display();
    return 0;
}