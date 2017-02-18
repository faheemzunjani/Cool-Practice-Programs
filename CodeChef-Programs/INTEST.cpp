#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,res=0;
    cin>>n>>k;
    while (n--)
    {
    	cin>>t;
    	if (t%k==0)
    		res++;
    }
    cout<<res;
    return 0;
}
