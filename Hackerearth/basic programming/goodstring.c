#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0,j,i,l,freq[100000];
	string s;
	cin >> s;
	l = s.length();
	memset(freq,0,sizeof(freq));
	for(i=0;i<l;i++)
	{
		freq[s[i] - 'a']++;
	}
	for(i=0;i<26;i++)
	{
		while(freq[i]>1)
		{
			freq[i]--;
			count++;
		}

	}
	cout << count << endl;

	return 0;
}
