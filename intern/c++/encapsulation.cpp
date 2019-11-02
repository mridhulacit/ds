//encapsulation is defined as bnding together the data and function that manipulates them.
//example:-a class consisiting 60 students have 5 subjects which are handled by different staffs and 
//one unique staff will play the role of class teacher
//now each teacher will handle their own subjects and will have their own marks
//so now lets take maths,maths teacher will have his/her own details and marks
//now lets say class teacher needs those details now directly maths marks cant be accessed by class teacher
//maths teacher's permission is needed to access that data
//now once after getting permission it binds the required data
//here,binding takes place along with data abstraction,
//from which we can understand that,encapsulation supports data abstraction or data hiding
//in my example,details and marks of each subjects are privatised from each and evry subject teacher.
#include<iostream>
using namespace std;

class sum
{
private: 
int a,b,c;
//here,these data members and member functions are binded together in a class
//called encapsulation
public:
void add()
{
cout<<"Enter any two numbers: ";
cin>>a>>b;
c=a+b;
cout<<"Sum: "<<c;
}
};
int main()
{
sum s;
s.add();
return 0;
}