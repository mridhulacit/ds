//capability of a class to derive properties and characteristics from another class is called Inheritance.
//Inheritance supports the concept of “reusability”, i.e. when we want to create a new class and 
//there is already a class that includes some of the code that we want, we can derive our new class 
//from the existing class.
// By doing this, we are reusing the fields and methods of the existing class.
//this feature is called reusability.
//Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
//Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.
//consider we are writing functions to vehicles car&bus both will have capacity(),speed(),brakes()
//without inheritance these are wrtiten 2 times 
//if we use inheritance concept here,then code reusability plays here and its enough to write once
//and can give access to other class too.
//now to avoid the complexity,duplication and error,we are developing a base class and giving access to bus and car class
//so,base clas:vehicle...derived class:bus class and car class
//we are writing the functions in base class and allow it to inherit bhy derived class

                              //Modes of Inheritance

//1.Public mode: If we derive a sub class from a public base class. 
//Then the public member of the base class will become public in the derived class and 
//protected members of the base class will become protected in derived class.
//2.Protected mode: If we derive a sub class from a Protected base class. 
//Then both public member and protected members of the base class will become protected in derived class.
//3.Private mode: If we derive a sub class from a Private base class. 
//Then both public member and protected members of the base class will become Private in derived class.

//The private members in the base class cannot be directly accessed in the derived class

                        //Types of Inheritance in C++

//1.Single Inheritance: 

//In single inheritance, a class is allowed to inherit from only one class. 
//i.e. one sub class is inherited by one base class only.

//Syntax:
//class subclass_name : access_mode base_class
//{
  //body of subclass
//};

//2.Multiple Inheritance:

//Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. 
//i.e one sub class is inherited from more than one base classes.

//Syntax:-
//class subclass_name : access_mode base_class1, access_mode base_class2, ....
//{
  //body of subclass
//};
//Here, the number of base classes will be separated by a comma (‘, ‘)
// and access mode for every base class must be specified.

//3.Multilevel Inheritance: 

//In this type of inheritance, a derived class is created from another derived class.

//syntax:-

//class subclass_name : access_mode base_class1
//{
  //body of subclass
//};
//class base_class2 : access_mode base_class1
//{
    //body of subclass
//};

//4.Hierarchical Inheritance: 

//In this type of inheritance, more than one sub class is inherited from a single base class. 
//i.e. more than one derived class is created from a single base class. 

//syntax:-

//class subclass1_name : access_mode base_class
//{
    //body of subclass
//};
//class subclass2_name ; access_mode base_class
//{
    //body of class
//};

//5.Hybrid Inheritance: 

//Hybrid Inheritance is implemented by combining more than one type of inheritance.