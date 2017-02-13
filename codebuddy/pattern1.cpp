#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row,col;
	cin >> n;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col % 2 == 1)
			{
				cout << "* ";	
			}
			else	if(col % 2 == 0)
			{
				cout << "@ ";
			}
		}
		cout << endl;
	}
	return 0;
}
