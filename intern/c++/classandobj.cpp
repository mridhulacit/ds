//CLASSES AND OBJECTS:-

//1.A class is like blue print of data member and functions & objects are the instances of the 
//the data members and member functions of a class can be accessed using this object using (.)dot operator
//class is created in the same way like structure.....using class keyword
//even class holds data members of different data types
//2.Lets say we have a class which has data members and member functions and lets say we are creating an object,
//this ojects will  have its own values for those data member and member functions.
//3.if we create another object it will have its own values.
//4.like this we can create several objects that owns its own(each has diff} data member and function values.
//if we dint mention the access specifiers while declaring a data member or function then by default its 
//taken as private class access specifier
//private variables cannot be accessed by all function and classes unless and untill through a public function
//this private variable provides data abstraction and encapsulation
//when class is declared no memory is allocated
//memory is allocated when its instantiated-->i.e,when an object of the class is created 
//Class in C++ is a blue-print representing a group of objects which shares some common properties
// and behaviours.
//member functions of a class is declared inside the class and can be defined inside or outside the class
#include<iostream>
using namespace std;
class book
{
    public:
    int book_id;
    char book_name[30];
    int issue_date;
    int returning_date;
    //member function that is defined inside the class 
    int get_data()
    {
        cout<<"\nenter the book id:";
        cin>>book_id;
        cout<<"\nenter the name of the book:";
        cin>>book_name;
        cout<<"\nenter the only date of issueing book:";
        cin>>issue_date;
        cout<<"\nenter the only date of returning book:";
        cin>>returning_date;
        return 0;
    }
    //2 member functions are declared inside class whose definitions are return outside the class
    int print_data();
    int calculation();

};
//here the classes are defined 
//while defining use syntax:  return_type  class_name :: function_name(){}
//its accessed using the scope variable
int book::print_data()
{
    cout<<"\nenter the book id:";
    cout<<book_id;
    cout<<"\nenter the name of the book:";
    cout<<book_name;
    cout<<"\nenter the only date of issueing book:";
    cout<<issue_date;
    cout<<"\nenter the only date of returning book:";
    cout<<returning_date;
    return 0;
}
int book::calculation()
{
    cout<<"\nthe cost of using book is:";
    cout<<(returning_date-issue_date)*40<<"\n";
}
int main()
{
    //object is created for the class using syntax: class_name  object_name;
    //this object is accessing the data members and member functions using (.)operator
    book b1;
    b1.get_data();
    b1.print_data();
    b1.calculation();
    book b2;
    int i=0;
    //using while loop set of data is collected
    while(i<2)
    {
        b2.get_data();
        b2.print_data();
        b2.calculation();
        i++;
    }
    book b3;
    //for loop is used to collect set of elements
    for(int i=0;i<2;i++)
    {
        b3.get_data();
        b3.print_data();
        b3.calculation();
    }
}