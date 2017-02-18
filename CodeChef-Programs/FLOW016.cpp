#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a<b) swap(a,b);
    if (a%b==0) return b;
    else if(a==1||b==1) return 1;
    return gcd (b,a%b);
}

int main()
{
    int t,a,b,hcf;
    long long int lcm;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        hcf=gcd(a,b);
        lcm=(a*b)/hcf;
        cout<<hcf<<" "<<lcm<<endl;
    }
    return 0;
}
