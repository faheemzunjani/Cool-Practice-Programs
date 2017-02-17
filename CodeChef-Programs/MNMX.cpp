#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,i;
	long long int res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		res=((long long int) arr[0])* ((long long int) (n-1));
		cout<<res<<'\n';
	}
    return 0;
}
