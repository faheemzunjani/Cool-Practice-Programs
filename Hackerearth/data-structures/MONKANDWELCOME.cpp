#include <iostream>
using namespace std;

int main()
{
    long int n,i,a[100000],b[100000],c[100000];
    for(i=0;i<n;i++)
    {
        c[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
      c[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
