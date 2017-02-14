#include <iostream>
using namespace std;

int main()
{   long long int t,i,j,n,a[100000],c;
    cin>>t;
    for(i=0;i<t;i++)
    {   c=0;
        cin>>n;
        for(j=0;j<n;j++)
      {
        cin>>a[j];

      }
      for(j=0;j<n;j++)
      { if(j==0)
        c++;
        if(j!=0)
        {
        if(a[j]>a[j-1])
        a[j]=a[j-1];
        else
        c++;
        }

      }
      cout<<c<<"\n";
    }
    return 0;
}
