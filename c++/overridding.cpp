#include <iostream>
using namespace std;

class Bird
{
public:
  virtual void fly()
  {
    cout << "i am  a bird" << endl;
  }
};

class Peacock : public Bird
{
public:
  virtual void fly()
  {
    cout << "i am a peacock" << endl;
  }
};

class Sparrow : public Bird
{
public:
  void fly()
  {
    cout << "i am a sparrow" << endl;
  }
};

int main()
{
  Bird *a;
  Sparrow b;
  a = &b;
  a->fly();
  return 0;
}
