#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n,x[1005],flag;
	cin >> t;
	while(t--)
	{
		flag = 0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> x[i];
		}
		for(i=0; i<=n/2;i++)
		{
			if(x[i] != x[n-i-1])
			{
				flag = 1;
				break;
			}
			else {
				flag = 0;
			}
		}
		if(flag==0)
		{
			cout << "Yes\n";
		}
		else if(flag==1)
		{
			cout << "No\n";
		}

	}
	return 0;
}
