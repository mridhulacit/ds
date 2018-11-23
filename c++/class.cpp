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
    int a,d; //here variables are declared under public which shows it can be also be used outside te class//
    public:
    void getdata2()
    {
        cout<<"enter the second value for x:"<<endl;
        cin>>x; //the private variables of class sample are used in this class//
        cout<<"enter the second value for y:"<<endl;
        cin>>y; //this shows error//
        //as private variables can be accessed only within the class//
        //it shows scope error//
    }
    void putdata2()
    {
        cout<<"the entered value is:"<<x<<endl;
        cout<<"the entered value is:"<<y<<endl;
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
    return 0;
}