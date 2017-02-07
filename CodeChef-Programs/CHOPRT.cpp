#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int a,b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		if(a > b)
		{
			cout << ">\n";
		}
		else if(a < b)
		{
			cout << "<\n";
		}
		else if(a==b)
		{
			cout << "=\n";
		}
	}
	return 0;
}
