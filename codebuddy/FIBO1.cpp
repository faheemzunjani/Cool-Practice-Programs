nclude<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n,fib,current,old,sum;
	cin >> t;
	while(t--)
	{
		current = 1;
		old = 0;
		sum = 0;
		cin >> n;
		for(i=0;i<n-1;i++)
		{
			sum = (current + old) % 1000000007;
			old = current;
			current = sum;
		}
		cout << current << endl;
	}
	return 0;
}
