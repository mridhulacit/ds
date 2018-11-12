#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,max;
    int a[50][50];
    int sum[50][50];
    cout<<"enter the value of rn"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"enter the value:"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"the matrix A is:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
            cout<<'\t';
        }
        cout<< '\n' ;
    }
cout<<"the maximum trace is:"<<endl;

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    {
        sum[i][j]=0;
        sum[i][j]=a[i][j]+a[i+1][i+1];
        if(sum[i][j]>sum[i+1][i+j])
        {
            max=sum[i][j];
        }
    }
}
cout<<max<<endl;
}
