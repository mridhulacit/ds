#include <iostream> 
using namespace std; 

// base class 
class Vehicle 
{ 
public: 

	void vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

// sub class derived from  base class
class Car: public Vehicle
{ 
    //lets invoke base class  by creating object for this derived class
};  
int main() 
{ 
	// creating object of sub class will 
	// invoke the base classes 
	Car obj; 
    obj.vehicle();
	return 0; 
} 
