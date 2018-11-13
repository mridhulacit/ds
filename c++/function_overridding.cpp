#include<iostream>
using namespace std;
class First_one //base class//
{
    public:
    virtual void display() //base class method//
    {
        cout<<"this is the first class";
    }
};
class Second_one : public First_one //first derived class//
{
    public:
    void print()
    {
        cout<<"this is the second class";
    }
};
class Third_one : public First_one //second derived class//
{
    public:
    virtual void display() //same method as base class//
    {
        cout<<"this is the third class";
    }
};
int main()
{
    Second_one s; 
    s.print(); //since it has different method name without any issues its called using oject//
    First_one *a; //overridding mechanism..here object is used as pointer and  method is nvoked//
    Third_one b;
    //a = &b; //the classes which are virtual will be accessed in this way//
    a->display();  //invoking the method// 
    return 0;

}
