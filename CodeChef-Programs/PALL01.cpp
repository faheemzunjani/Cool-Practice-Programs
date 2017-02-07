#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,l,check;
	string n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		check = 0;
		l = n.length();
		for(i=0;i<l;i++)
		{
			if(n[i] != n[l-i-1])
			{
				cout << "losses\n";
				check = 1;
				break;
			}
		}
		if(check == 0)
		{
			cout << "wins\n";
		}
	}
	return 0;
}
