#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if ((a>=b&&a<=c)||(a>=c&&a<=b))
            cout<<a<<endl;
        else if ((b>=c&&b<=a)||(b>=a&&b<=c))
            cout<<b<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
