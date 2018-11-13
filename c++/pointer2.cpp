#include <iostream>
using namespace std;
int main()
{
    int a[50], *p;
    int n, i, sum;
    cout << "enter the max size of array:" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the element:" << endl;
        cin >> a[i];
    }
    p = a;
    for (i = 0; i < n; i++)
    {
        cout << "the array element is" << a[i] << endl;
    }
    sum=0;
    for (i = 0; i < n; i++)
    {
        if ((*p) % 2 == 0)
            sum = sum + *p;
        p++;
    }
    cout << "the sum of even nos is:" << sum << endl;
}