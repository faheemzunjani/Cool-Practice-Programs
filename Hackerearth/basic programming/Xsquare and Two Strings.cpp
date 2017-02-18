#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    int t,i;
    string str,str2;
    cin>>t;
    while (t--)
    {
    	cin>>str>>str2;
    	int fre[26]={0};
    	int fre1[26]={0};
    	for (i=0;i<str.length();i++)
    	{
    		fre[str[i]-'a']++;
    	}
    	for (i=0;i<str2.length();i++)
    	{
    		fre1[str2[i]-'a']++;
    	}
    	int flag=0;
    	for (i=0;i<26;i++)
    	{
    		if (fre[i]>0 && fre1[i]>0)
    		{
    			cout<<"Yes\n";
    			flag=1;
    			break;
    		}
    	}
    	if (flag==0)
    		cout<<"No\n";
    }
    return 0;
}
