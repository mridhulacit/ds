#include<iostream>
using namespace std;
class head
{
    public:
    head()
    {
        cout<<"this is my constructor of base class"<<endl;
    }
    //Deleting a derived class object using a pointer to a base class that 
    //has a non-virtual destructor results in undefined behavior. 
    //To correct this situation, the base class should be defined with a virtual destructor.
    //Making base class destructor virtual guarantees that the object of derived class is 
    //destructed properly, i.e., both base class and derived class destructors are called.
    virtual ~head()
    {
        cout<<"this is my destructor of base class"<<endl;
    }
};
class tail:public head
{
    public:
    tail()
    {
        cout<<"this is my derived class constructor"<<endl;
    }

    ~tail()
    {
        cout<<"this is my derived class destructor"<<endl;
    }
};
int main()
{
    head *h;
    tail t;
    delete h;
    return 0;
}