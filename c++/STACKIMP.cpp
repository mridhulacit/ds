#include <iostream>
using namespace std;
const int MAX =5;
template <class t>
class Stack1
{
    public:
    t s[MAX];
    int top;
    public:

                      //stack initialization
    void initstack()
    {
        top = -1;
    }
                       //check it is empty or not
    int isempty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

                   //check stack is full or not
    int isfull()
    {
        if (top == MAX - 1)
            return 1;
        else
            return 0;
    }

    void push(t num)
    {
        if (isfull())
        {
            cout << "stack is full" << endl;
            return;
        }
        ++top;
        s[top] = num;
        cout << num << " has been inserted." << endl;
    }

    void display()
    {
        if (isempty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack1<int> s1;
    Stack1<double> s2;
    s1.initstack();
    s1.isempty();
    s1.isfull();
    s1.push(11);
    s1.push(12);
    s2.initstack();
    s2.isempty();
    s2.isfull();
    s2.push(2.4);
    s2.push(1.2);
    s2.display();
    s1.display();
}