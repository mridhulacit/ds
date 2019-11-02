//in this we are making hierarchical and multilevel inheritance 
//now hierarchical will inherit two subclasses from a single base class
//whereas multilevel inheritance inherits a single subclass from 2 derived clss
//so combining this 2 we will have one major base class that inherits 2 derived class which
//acts as a base class to produce a single derived class
//now on this,one single class is getting derived from 2 derived class which inherits the 
//properties of a base class
//now those properties may reach the last derived class in both ways which means it may
//get those properties and behaviours 2 times which leads to ambiguity error
//thus,we have to use virtual base classes
//Virtual base classes, used in virtual inheritance, is a way of preventing 
//multiple "instances" of a given class appearing in an inheritance hierarchy 
//when using multiple inheritance.
#include<iostream>
using namespace std;
class Student
{
    protected:
    char name[50];
    int rollno,i;
    public:
    void getdata1()
    {
      cout<<"enter the name:"<<endl;
      cin>>name;
      cout<<"enter the roll no:"<<endl;
      cin>>rollno;
    } 
};
class Test:public virtual Student//using virtual base class
{
    protected:
    int m1,t1,e1,total1;
    public:
    void getdata2()
    {
        cout<<"enter the maths mark in test1:"<<endl;
        cin>>m1;
        cout<<"enter the tamil mark in test1:"<<endl;
        cin>>t1;
        cout<<"enter the english mark in test1:"<<endl;
        cin>>e1;
        total1=m1+t1+e1;
    }
};
class Mainexam:public virtual Student//using virtual base class
{
    protected:
    int m2,t2,e2,total2;
    public:
    void getdata3()
    {
       cout<<"enter the maths mark in test2:"<<endl;
       cin>>m2;
       cout<<"enter the tamil mark in test2;"<<endl;
       cin>>t2;
       cout<<"enter the english mark in test2:"<<endl;
       cin>>e2;
       total2= m2+t2+e2;
    }
};
class Finalscore:public Test,public Mainexam
{
    public:
    int score;
    public:
    void calc()
    {
        score=total1+total2;
    }
    void display()
    {
        cout<<"--TEST1 MARKS--"<<endl;
        cout<<"NAME OF THE STUDENT:"<<name<<endl;
        cout<<"ROLL NUMBER:"<<rollno<<endl;
        cout<<"MATHS MARK"<<m1<<endl;
        cout<<"TAMIL MARK"<<t1<<endl;
        cout<<"ENGLISH MARK"<<e1<<endl;
        cout<<"--TEST2 MARKS--"<<endl;
        cout<<"MATHS MARK"<<m2<<endl;
        cout<<"TAMIL MARK"<<t2<<endl;
        cout<<"ENGLISH MARK"<<e2<<endl;
        cout<<"FINAL SCORE"<<score<<endl;
    }
};
int main()
{
    Finalscore a2;
    a2.getdata1();//if without making virtual base class this shows ambiguity error//
    a2.getdata2();
    a2.getdata3();
    a2.calc();
    a2.display();
}