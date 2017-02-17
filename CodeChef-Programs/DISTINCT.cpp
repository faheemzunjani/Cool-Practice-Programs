#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    int t,n,i;
    string temp;
    cin>>t;
    while (t--)
    {
    	set <string> s;
    	set <string>::iterator it;
    	cin>>n;
    	while (n--)
    	{
    		cin>>temp;
    		s.insert(temp);
    	}
    	cout<<s.size()<<'\n';
    	for (it=s.begin();it!=s.end();it++)
    	{
    		cout<<*it<<'\n';
    	}
    }
    return 0;
}
