#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string a,b;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a==b)
            cout<<"YES\n";
        else if ((a=="2"&&b=="4")||(a=="4"&&b=="2"))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
