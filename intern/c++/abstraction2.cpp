#include <iostream>    
using namespace std;    
 class Sum    
{    
private: int x, y, z; // private variables are declared here which cant be accessed by other classes
public:    
//only these public functions can handle those private variables
int add()    
{    
cout<<"Enter two numbers: ";    
cin>>x>>y;    
z= x+y; 
return z;   
}
void print(int);
};    
void Sum::print(int s)
{
    cout<<"sum is:"<<s;//only public functions of SAME CLASS can access private variables
} 
int main()    
{ 
int a;   
Sum sm;   
a=sm.add();
sm.print(a);
return 0;    
}    