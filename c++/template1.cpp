#include<iostream>
using namespace std;
template <class T>
class Calculation
{
    private:
    T num1,num2,num3;
    public:
    Calculation(T a,T b)
    {
       T c;
       num1=a;
       num2=b;
       num3=c;
    }
    T add()
    {
        num3=num1+num2;
        return num3;
    }
    T sub()
    {
        num3=num1-num2;
        return num3;
    }
    T mul()
    {
        num3=num1*num2;
        return num3;
    }
};
int main()
{
    Calculation <int> a1(1,2);
    Calculation <float>a2(2.4,4.5);
    cout<<"the sum of integers is:"<<a1.add()<<endl;
    cout<<"the sum of float nos is:"<<a2.add()<<endl;
    cout<<"the diff of integers is:"<<a1.sub()<<endl;
    cout<<"the dif of float nos is:"<<a2.sub()<<endl;
    cout<<"the product of integers is:"<<a1.mul()<<endl;
    cout<<"the product of float nos is:"<<a2.mul()<<endl;
}
