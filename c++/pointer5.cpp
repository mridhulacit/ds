#include<iostream>
using namespace std;
class Books
{
    int bno;
    float price;
    public:
    void getdata(int a,int b)
    {
      bno=a;
      price=b;
    }
    void display()
    {
        cout<<"book no:"<<bno<<endl;
        cout<<"price:"<<price<<endl;
    }
};
const int n=2;
int main()
{
    Books *v=new Books[n];
    Books *m=v;
    int x,i;
    float y;
    for ( i=0;i<n;i++)
    {
        cout<<"enter code and price item:"<<endl;
        cin>>x>>y;
        v->getdata(x,y);
        v++;
    }
    for(i=0;i<n;i++)
    {
        m->display();
        m++;
    }

}
