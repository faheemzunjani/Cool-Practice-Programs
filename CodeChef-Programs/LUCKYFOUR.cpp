#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,res;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>n;
        while (n>0)
        {
            if (n%10==4)
                res++;
            n/=10;
        }
        cout<<res<<'\n';
    }
    return 0;
}
