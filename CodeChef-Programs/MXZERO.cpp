#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,i,co,temp;
	cin>>t;
	while (t--)
	{
		co=0;
		cin>>n;
		for (i=0;i<n;i++)
		{
			cin>>temp;
			if (temp==1)
				co++;
		}
		if (co%2!=0)
			cout<<co<<'\n';
		else
			cout<<n-co<<'\n';
	}
    return 0;
}
