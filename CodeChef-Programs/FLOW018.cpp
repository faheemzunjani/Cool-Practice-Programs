#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	long int fact;
	cin >> t;
	while(t--)
	{
		fact = 1;
		cin >> n;
		for(i=2;i<=n;i++)
		{
			fact = fact * i;
		}
		cout << fact << endl;
	}
	return 0;
}
