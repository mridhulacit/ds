#include<iostream> 
using namespace std; 

class Complex 
{ 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i =0) 
    {
        real = r; 
        imag = i;
     } 
	Complex operator + (Complex const &obj) 
    { 
		Complex res; 
		res.real = real + obj.real; 
		res.imag = imag + obj.imag; 
		return res; 
	} 
	void print()
     {
          cout << real << " + i" << imag << endl; 
     } 
}; 

int main() 
{ 
	Complex c1(12,7);
    Complex c2(1,8); 
	Complex c3 ;
    c3= c1 + c2; // The function automatically called when '+' is used with //
	c3.print(); 
} 
