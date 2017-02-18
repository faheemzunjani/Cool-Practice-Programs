#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	int t;
	int n,ans,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		res=0;
		while (n)
		{
			if ((n&1)==0)
				res++;
			n=n>>1;
		}
		ans=(1<<res);
		ans--;
		cout<<ans<<endl;
	}
	return 0;
}
