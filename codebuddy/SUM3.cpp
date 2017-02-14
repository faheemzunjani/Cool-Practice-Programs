#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin >> n;
	while(n)
	{
		sum = sum + n%10;
		n = n/10;
	}
	cout << sum << endl;
	return 0;
}
