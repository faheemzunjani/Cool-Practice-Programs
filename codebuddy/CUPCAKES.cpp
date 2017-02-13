#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,max,j;
	cin >> t;
	while(t--)
	{
		j=0;
		cin >> n;
		max=0;
		for(i=1;i<=n;i++)
		{
			if(n%i>=max)
			{
				max = n%i;
				j = i;
			}
		}
		cout << j << endl;
	}
	return 0;
}
