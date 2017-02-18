#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,f,l;
    cin>>t;
    while (t--)
    {
        cin>>n;
        f=n%10;
        while (n!=0)
        {
            l=n%10;
            n/=10;
        }
        cout<<f+l<<endl;
    }
    return 0;
}
