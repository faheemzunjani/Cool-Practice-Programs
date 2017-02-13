#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int i,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << k*(n/k + 1) << endl;		
	}
	return 0;
}
