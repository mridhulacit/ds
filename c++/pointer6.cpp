#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
  private:
    int x;

  public:
    void getX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }
    void disp()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Test t;
    int x = 20;
    t.getX(x);
    t.disp();
    return 0;
}
