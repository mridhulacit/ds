#include<iostream>
using namespace std;
class first
{
    public:
    int a,b;

    first()
    {
        a=10;
        b=20;
        cout<<"values are initiallized"<<endl;
    }
    public:
    void read()
    {
        cout<<"the data is read"<<endl;
    }
    public:
    void display()
    {
        cout<<"the data is"<<a<<"and"<<b<<endl;
        cout<<"the data is displayed"<<endl;
    }
    ~first()
    {

        cout<<"the destructor is created;"<<endl;
    }
};
int main()
{
    first c; //this object is also for constructors and destructors//
    //whenever object of instance is crated constructor is executed automatically//
     c.read();//even though destructor respected function is given first its executed in the last//
    //as the order of execution is constructors..methods..destructor//
    c.display();
    //atlast destroys the space created//
    return 0;
}
//even if we dont call the constructor functions..it will be executed at the time of object creation//