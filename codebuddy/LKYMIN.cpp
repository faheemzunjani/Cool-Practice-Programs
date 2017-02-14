#include <iostream>
using namespace std;

int main()
{   long int min;
    int i,t,n,a[100000],c;
    cin>>t;
    while(t--)
    {   c=0;
        cin>>n;
        min=1000000001;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(min>a[i])
            min=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(min==a[i])
            c++;
        }
        if(c%2==0)
        cout<<"Unlucky\n";
        else
        cout<<"Lucky\n";
    }
    return 0;
}
