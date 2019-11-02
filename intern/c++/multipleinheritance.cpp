#include <iostream> 
using namespace std; 
class Vehicle { 
public: 
	void vehicle() 
	{ 
	cout << "This is a Vehicle-first base class" << endl; 
	} 
}; 
class FourWheeler { 
public: 
	void fourWheeler() 
	{ 
	cout << "This is a 4 wheeler Vehicle-second base class" << endl; 
	} 
}; 
class Car: public Vehicle, public FourWheeler 
{ 
    public:
    int a,b;
    void car()
    {
        cout<<"enter two values:";
        cin>>a>>b;
        cout<<"\nvalues are:"<<a+b<<endl;
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
