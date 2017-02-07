#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n,yes,iyes,no;
	string x;
	cin >> t;
	while(t--)
	{
		yes=0;
		iyes=0;
		no=0;
		cin >> n >> x;
		for(i=0;i<n;i++)
		{
			if(x[i]== 'Y')
			{
				yes++;
			}
			else if(x[i] == 'I')
			{
				iyes++;
			}
			else if(x[i] == 'N')
			{
				no++;
			}
		}
		if((yes == 0) && (no != 0) && (iyes != 0) || (yes == 0) && (no == 0) && (iyes != 0))
		{
			cout << "INDIAN\n";
		}
		else if((yes != 0) && (no != 0) && (iyes == 0) || ((yes != 0) && (no == 0) && (iyes == 0)))
		{
			cout << "NOT INDIAN\n";
		}
		else if(((yes != 0) && (no != 0) && (iyes != 0)) || ((yes != 0) && (no == 0) && (iyes != 0)) || (((yes == 0) && (no != 0) && (iyes == 0))) || ((yes != 0) && (no != 0) && (iyes != 0)))
		{
			cout << "NOT SURE\n";
		}
	}
	return 0;
}
