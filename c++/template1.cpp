#include<iostream>
using namespace std;
template <class T>
class Addition
{
    private:
    T num1,num2;
    public:
    Addition(T a,T b)
    {
       num1=a;
       num2=b;
    }
    T add()
    {
        T num3;
        num3=num1+num2;
        return num3;
    }
};
int main()
{
    Addition <int> a1(1,2);
    Addition <float>a2(2.4,4.5);
    cout<<"the sum of integers is:"<<a1.add()<<endl;
    cout<<"the sum of float nos is:"<<a2.add()<<endl;
}