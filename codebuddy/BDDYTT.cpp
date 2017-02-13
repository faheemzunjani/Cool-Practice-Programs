#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,t,x,y,z;
	string s;
	cin >> t;
	while(t--)
	{
		z=0;
		x=0;
		y=0;
		cin >> s;
		l = s.length();
		for(i=0;i<l;i++)
		{
			if(s[i] == '1')
			{
				x++;
			}
			else if(s[i] == '0')
			{
				y++;
			}
			if(z==0)
			{
				if(x == 11)
				{
					cout << "WIN\n";
					break;
				}
				else if(y == 11)
				{
					cout << "LOSE\n";
					break;
				}
			}

			if(x==10 && y==10)
			{
				z=1;
			}
			if(z==1)
			{
				if(x+2==y)
				{
					cout << "LOSE\n";
					break;				
				}
				else if(x==y+2)
				{
					cout << "WIN\n";
					break;				
				}
			}
		}
	}
	return 0;
}
