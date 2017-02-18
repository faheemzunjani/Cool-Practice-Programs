#include <iostream>
using namespace std;

int main()
{
	long long int n,i,l,r,q;
    cin>>n;
    long long int a[1000000],b[1000000];
    a[0]=0;
    b[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        if(r!=l)
            cout<<b[r]-b[l]+a[l]<<endl;
        else
            cout<<a[r]<<endl;
	}
    return 0;
}
