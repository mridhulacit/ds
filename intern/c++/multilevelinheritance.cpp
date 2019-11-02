#include <iostream> 
using namespace std; 
class Vehicle 
{ 
public: 
	void vehicle() 
	{ 
	cout << "This is a Vehicle-base class" << endl; 
	} 
}; 
class FourWheeler: public Vehicle 
{ public: 
	void fourWheeler() 
	{ 
	cout<<"This is a four wheeler derived from vehicle"<<endl; 
	} 
}; 
class Car: public FourWheeler{ 
public: 
	void car() 
	{ 
	cout<<"This is a car derived from fourwheeler"<<endl; 
	} 
}; 

int main() 
{ 
	Car obj; 
    obj.vehicle();
    obj.fourWheeler();
    obj.car();
	return 0; 
} 
