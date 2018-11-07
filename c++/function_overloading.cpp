#include<iostream>
using namespace std;
class first
{
    public:
    void one(int a)
    {
        cout<<"the value stored here is "<<a<<endl;
    }
    void one(double b)
    {
        cout<<"the value here is"<<b<<endl;
    }
    void one(int a,double b)
    {
        cout<<"the value stored here is"<<a<<"and"<<endl;
    }
    void one(int a,int c)
    {
        cout<<"the value stored here is"<<a<<"and"<<c<<endl;
    }
};
int main()
{
    first f;
    f.one(2,2.3);
    f.one(2);
    f.one(2.3);
    f.one(2,3);
}
