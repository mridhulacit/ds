#include<iostream>
using namespace std;
const int MAX = 3;
 int main () 
{
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];
 
   for (int i = 0; i < MAX; i++) 
   {
      ptr[i] = &var[i]; // now array index(adress of a) is stored in ptr
   }
   
   for (int i = 0; i < MAX; i++) 
   {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl; //*ptr gives the values of a
   }
   
   return 0;
}