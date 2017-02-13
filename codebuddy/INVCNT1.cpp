#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,i,n,x[10000],ctr=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> x[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i<j && x[i] > x[j])
			{
				ctr++;
			}
		}
	}
	cout << ctr << endl;
	return 0;
}
