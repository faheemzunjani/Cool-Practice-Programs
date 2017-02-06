#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,x[1000000],k,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> x[i];
	}
sort(x,x+t);
	for(i=0;i<t;i++)
	{
		cout << x[i] << endl;
	}
	return 0;
}
