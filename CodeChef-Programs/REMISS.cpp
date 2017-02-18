#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,min,max;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a>b)
            min=a;
        else
            min=b;
        max=a+b;
        cout<<min<<" "<<max<<'\n';
    }
    return 0;
}
