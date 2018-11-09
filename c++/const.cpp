#include<iostream>
using namespace std;
class one
{
    public:
    int a,b;
    public:
    one()
    {
        cout<<"this is non parametrized default constructor"<<endl;
        a=0;
        b=0;
    }
    one(int x,int y)
    {
        cout<<"this is parametrized constructor"<<endl;
        a=x;
        b=y;
    }
    one(int x)
    {
        cout<<"this is also parametrized constructor with one argument"<<endl;
         a=x;
    }
    one(one &i) //noe the object given in its parameter is checked and the matched ones value willl be copied to the respective variables//
    {
        cout<<"this is copy constructor"<<endl;
        a=i.a;
        b=i.b;
    }
    public:
    void display()
    {
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
    }
};
int main()
{
    int n;
    one m(10,20); //parametrized constructor is called// 
    m.display(); 
    cout<<"enter the value of n:"<<endl;
    cin>>n;//the value is intiallized during run time called dynamic initiallization//
    one w(n); //parametrized constructor with one argument is called//
    w.display();
    one v(m); //here the copy constructor is called//
    //the value of object m is copied to object v//
    v.display();
    one c; //non parametrized constructor is called//
    one ig;
    ig=m;
    ig.display();
    c.display();
    //for each object the respective function is called with the object and dot operator//
    return 0;

}