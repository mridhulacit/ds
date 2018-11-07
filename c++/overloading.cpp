#include <iostream>
using namespace std;
void calci(int a, int b);
void calci(int a, double c);
void calci(int a, int b, int d);

void calci(int a, int b)
{
    a = a + b;
    cout << "the sum is" << a;
}
void calci(int a, double c)
{
    a = a - c;
    cout << "the difference is" << a;
}
void calci(int a, int b, int d)
{
    a = a * b * d;
    cout << "the product is" << a;
}
int main()
{
    calci(2, 2);
    calci(2, 1.0);
    calci(2, 3, 4);
    return 0;
}














