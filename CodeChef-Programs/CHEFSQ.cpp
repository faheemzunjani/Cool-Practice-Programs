#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,f,i,j,flag;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		cin>>f;
		int fav[f];
		for (i=0;i<f;i++)
			cin>>fav[i];
		j=0;
		flag=0;
		for (i=0;i<n;i++)
		{
			if (arr[i]==fav[j])
			{
				j++;
				if (j==f)
				{
					flag=1;
					break;
				}
			}
		}
		if (flag==1)
			cout<<"Yes"<<'\n';
		else
			cout<<"No"<<'\n';
	}
    return 0;
}
