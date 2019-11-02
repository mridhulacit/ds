//Abstraction means displaying only essential information and hiding the unwanted details.
//data abstractoin is providing only essential information about the data to outside world and 
//hiding the unwanted details   
//simple ex:-when we are typing letters using keyboard users(us) only knows that when a key is typed 
//letters are getting displayed 
//but users doesnt know how its getting displayed when a key is typed
//so here only essential info is shown to outside the world and
//unwanted details like mechanisms are hidden.
//we can see implementation of abstraction in a program in 2 ways:
//ABSTRACTION USING CLASSES:
//while implementing classes abstraction playes a role when data members in classes are declared as
//private access specifier
//a class can decide  which variables can be given access to outside world and which shldnt be given
//here class provides data abstraction
//only public acess specifier allows outside world to access the undercoming variables and functions.
//ABSTRACTION IN HEADER FILES: 
//coming to header files,we are using several inbuilt functions like scanf,printf,cout,cin,pow()etc,
//each has a specific library which is included as header file using preprocessors
//here user doesnt even know about that,user only knows that printf or cout gives output,etc..
#include <iostream> 
#include<math.h>  
using namespace std;  
int main()  
{    
 int n = 4;  
   int power = 3;  
   int result = pow(n,power);         // pow() function is seen has inbuilt but its included from math.h
   std::cout << "Cube of n is : " <<result<< std::endl;  
   return 0;  
}  