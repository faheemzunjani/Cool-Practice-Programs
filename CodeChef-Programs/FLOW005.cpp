#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,res;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>n;
        while (n>=100)
        {
            res+=n/100;
            n%=100;
        }
        while (n>=50)
        {
            res+=n/50;
            n%=50;
        }
        while (n>=10)
        {
            res+=n/10;
            n%=10;
        }
        while (n>=5)
        {
            res+=n/5;
            n%=5;
        }
        while (n>=2)
        {
            res+=n/2;
            n%=2;
        }
        if (n==1)
            res++;
        cout<<res<<endl;
    }   
    return 0;
}
