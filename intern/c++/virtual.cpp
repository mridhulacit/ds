//virtual functions are mainly used to acheive runtim polymorphism
//A virtual function a member function which is declared within a base class and is
// re-defined(Overriden) by a derived class
//when we creat a pointer for the bass class and it refers to derived class,you can call,
//a virtual function for that object and execute the derived class’s version of the function.
//virtual function sses that,correct function to be called for an object.
//virtual function sees where does the pointer points,it never sees for what type the pointer is created.
//it never checks its base or derived class pointer, if base pointer refers to derived class object
//then derived class virtual functions are executed
//these are mainly for the purpose of acheiving runtime polymorphism
//these are declared with a virtual keyword
//here function call process takes place during runtime.
               //RULES FOR VIRTUAL FUNCTIONS//
//1.virtual functions cannot be static or friend function of another class
//2.Virtual functions should be accessed using pointer or reference of base class type 
//to achieve run time polymorphism.
//3.The prototype of virtual functions should be same in base as well as derived class.
//4.They are always defined in base class and overridden in derived class. It is not mandatory for 
//derived class to override (or re-define the virtual function), in that case base class version of 
//function is used.
//5.A class may have virtual destructor but it cannot have a virtual constructor.
                      //working of vtable and vptr//
//If object of that class is created then a virtual pointer(VPTR) is inserted as a data member of the 
//class to point to VTABLE of that class. For each new object created, a new virtual pointer is 
//inserted as a data member of that class.
//Irrespective of object is created or not, a static array of function pointer called VTABLE
//where each cell contains the address of each virtual function contained in that class.
//Initially, we create a pointer of type base class and initialize it with the address of the derived class 
//object. When we create an object of the derived class, the compiler creates a pointer as a data member 
//of the class containing the address of VTABLE of the derived class.

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
    void read()
    {
        cout<<"enter a:"<<endl;
        cin>>a;
        cout<<"enter b:"<<endl;
        cin>>b;
    }
    void calculate()
    {
        cout<<"the derived class calculation is"<<endl;
    }
    void display()
    {
        cout<<"the derived sum is"<<endl;
        cout<<a<<endl;
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
    h = &t;
    h->read();
    h->calculate();
    h->display();
    return 0;
}