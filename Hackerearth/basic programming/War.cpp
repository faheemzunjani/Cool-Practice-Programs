#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t, n, i, a, b, x;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d",&n);
		a=0;b=0;
		for (i=0;i<n;i++) 
		{
			scanf("%d", &x);
			if (a<x)
				a=x;
		}
		for (i=0;i<n;i++) 
		{
			scanf("%d", &x);
			if (b<x)
				b=x;
		}
		if (a<b) 
		{
			cout<<"Alice"<<endl;
		} 
		else if (a>b) 
		{
			cout<<"Bob"<<endl;
		} 
		else 
		{
			cout<<"Tie"<<endl;
		}
	}
	return 0;
}