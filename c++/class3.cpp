#include<iostream>
using namespace std;

class sample //this is a class //
{
   
    private:
    int x; //data members are private which states that it shld be accessed only by the member functions of that class//
    int y;
    public:
    void getdata() //function is defined within the class//
    {
        cout<<"enter the value of x:"<<endl;
        cin>>x;
        cout<<"enter the value of y:"<<endl;
        cin>>y;
    }
    void putdata();
};
void sample::putdata() //function is defined outside the class//
{
    cout<<"the value of x is:"<<x<<endl;
    cout<<"the value of y is:"<<y<<endl;
}
class sample2
{
    public:
    int a,b;
    public:
    void getdata2()
    {
        cout<<"enter the second value for a:"<<endl;
        cin>>a; //the correction is to use public variable or its own class data members//
        cout<<"enter the second value for b:"<<endl;
        cin>>b;
    }
    void putdata2()
    {
        cout<<"the entered value is:"<<a<<endl;
        cout<<"the entered value is:"<<b<<endl;
    }
};
class sample3
{
    public:
    int a,b;
    public:
    void putsample2data()
    {
        cout<<"a is:"<<a<<endl;;
        cout<<"b is:"<<b<<endl;;
    }

};
int main()
{
    
    sample s; //object for sample is created which is of same type as class smaple //
    //it creates memory space for all the data members and member functions in the class//
    s.getdata(); //with the help of objct the member function is called//
    s.putdata();
    sample2 m;
    m.getdata2(); //this is another class member which belongs to class sampple2//
    //m is a variable for sample2 class//
    m.putdata2();
    sample3 t;
    t.a=5;
    t.b=8;
    t.putsample2data();
    return 0;
}

//this is also a error prog as private member variable is accessed in main//