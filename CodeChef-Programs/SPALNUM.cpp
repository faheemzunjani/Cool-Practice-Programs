#include <bits/stdc++.h>
using namespace std;

int arr[100001];
void pc()
{
	memset(arr,0,sizeof(arr));
	int i,tmp,rev;
	for (i=1;i<100001;i++)
	{
		tmp=i;
		rev=0;
		while (tmp>0)
		{
			rev=(rev*10)+(tmp%10);
			tmp/=10;
		}
		if (i==rev)
			arr[i]=1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t,i,l,r;
	pc();
	cin>>t;
	long long int sum;
	while (t--)
	{
		sum=0;
		cin>>l>>r;
		for (i=l;i<=r;i++)
		{
			if (arr[i]==1)
			{
				sum+=i;
			}
		}
		cout<<sum<<'\n';
	}
    return 0;
}
