#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,j,i,n,x[1002],m;
	cin >> n;
	for(i = 0;i < n; i++)
	{
		cin >> x[i];
	}
	sort(x,x+n);
	for(i = 0; i <n; i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i] == x[j])
			{
				x[j]=0;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(x[i]!=0)
		{
			cout << x[i] << " ";
		}
	}
	cout << endl;
	return 0;
}
