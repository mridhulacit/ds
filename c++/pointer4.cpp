#include<iostream>
using namespace std;
int sum(int *p,int *q);
int main ()
{
    int x,y,z;
    z=sum(&x,&y);
    cout<<"the sum is:"<<z<<endl;
    return z;

}
int sum(int *p,int *q)
{
    int a,b,c;
    cout<<"enter a and b:"<<endl;
    cin>>a>>b;
    *p = a;
    *q = b;
    c = *p + *q;
    return c;
}

    
    