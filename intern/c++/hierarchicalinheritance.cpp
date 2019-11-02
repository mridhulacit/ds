#include <iostream> 
using namespace std;  
class Vehicle 
{ 
public: 
	void vehicle() 
	{ 
	cout << "\nThis is a Vehicle a base class" << endl; 
	} 
}; 

class Car: public Vehicle 
{
    public:
    void car()
    {
        cout<<"\nthis is a car derived class1 and derived from base class vehicle"<<endl;
    }
   
}; 
class Bus: public Vehicle 
{
    public:
    void bus()
    {
        cout<<"\nthis is bus derived class2 derived from the same base class as car"<<endl;
    }
}; 


int main() 
{  
	Bus obj1;
    //accessing vehicle class is possible because its the base class from which bus class has been derived 
    obj1.vehicle();
    obj1.bus();
    //obj1.car() will go impossible because its a derived class derived from vehicle base class
    //also bus is a derived class for which that obj1 has been created
    //so inorder to access the other derived class another object must be created
    Car obj2;
    obj2.vehicle();
    obj2.car();
	return 0; 
} 
