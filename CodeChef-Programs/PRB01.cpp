#include <bits/stdc++.h>
using namespace std;

bool isprime[100001];
void sieve()
{
	int i,j;
	memset(isprime,true,sizeof(isprime));
	for (i=2;i*i<100001;i++)
	{
		if (isprime[i]==true)
		{
			for (j=i*i;j<100001;j+=i)
				isprime[j]=false;
		}
	}
	isprime[1]=false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	sieve();
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (isprime[n]==true)
			cout<<"yes"<<'\n';
		else
			cout<<"no"<<'\n';
	}
    return 0;
}
