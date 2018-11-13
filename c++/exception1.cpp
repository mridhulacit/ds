#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    try
    {
        if(b==0)
        {
            throw(b);
        }
        else
        {
            cout<<"b is not zero"<<endl;
        }

    }
    catch(int)
    {
        cout<<"exception catched"<<endl;
        cout<<b<<endl;
    }
    cout<<"the result of division is:"<<a/b;
}