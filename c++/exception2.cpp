#include <iostream>
using namespace std;
void sample(int x,int a,int b,int c)
{
    if (x == 0)
    {
        throw x;
    }
    if (a == 1)
    {
        throw 'x';
    }
    if (b == -1)
    {
        throw(x + 1.0);
    }
    if(c == 1)
    {
        throw (x+2);
    }
    else
    {
        cout<<"a/b is:"<<a/b<<endl;
    }
}
int main()
{
    try
    {
        sample(0);

    catch (int)
    {
        cout << "if x is equal to 0" << endl;
        cout << "integer exception is catched"  << endl;
    }

    catch (char)
    {
        cout << "if x is equal to 1" << endl;
        cout << "integer exception is catched" << endl;
    }

    catch (double)
    {
        cout << "if x is equal to -1" << endl;
        cout << "integer exception is catched" << endl;
    }
}