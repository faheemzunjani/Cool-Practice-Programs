#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ctr,i,j,t,l,r,check[1001];
	cin >> t;
	memset(check,0,sizeof(check));	
	check[0] = check [1] = 1;
	for(i=2;i<=1000;i++)
	{
		if(!check[i]){
			for(j=2*i;j<=1000;j+=i)
			{
				check[j] = 1;
			}
		}
	}
	while(t--)
	{
		ctr = 0;
		cin >> l >> r;
		for(i=l;i<r;i++)
		{
			if(check[i]!=1){
				ctr++;
			}
		}
		cout << ctr << endl;
	}
	return 0;
}
