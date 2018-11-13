#include <iostream>
using namespace std;
template <class T>
void wap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cout << "enter two integer nos:" << endl;
    cin >> a >> b;
    cout << "integer nos before swapping:" << a <<'\t' << b << endl;
    wap(a, b);
    cout << "integer nos after swapping:" << a <<'\t' << b << endl;
}