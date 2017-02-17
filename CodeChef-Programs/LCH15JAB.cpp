#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,i,j;
	cin>>t;
	while (t--)
	{
		vector <int> v;
		string str;
		int count,sum=0;;
		cin>>str;
		for (i=0;i<str.length();i++)
		{
			if (str[i]!='?')
			{
				count=1;
				for (j=i+1;j<str.length();j++)
				{
					if (str[j]==str[i])
					{
						count++;
						str[j]='?';
					}
				}
				v.push_back(count);
				str[i]='?';
				sum+=count;
			}
		}
		int flag=0;
		for (i=0;i<v.size();i++)
		{
			if (v[i]==sum-v[i])
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
	}	
    return 0;
}
