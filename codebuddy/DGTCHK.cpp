#include<bits/stdc++.h>
using namespace std;
int main()
{
	int check,i,x,l;
	for(i=100;i<10000;i++)
	{
		l = i;
		check = 0;
		x = 0;
		while(l != 0)
		{
			check = l%10;
			if(check == 1 || check == 5 || check == 7 || check == 9)
			{
				x = 1;
			}
			else if(check != 1 || check != 5 || check != 7 || check != 9)
			{
				x = 0;
				break;
			}
			l = l/10;
		}
		if(x == 1)
		{
			cout << i << endl;
		}
	}
	return 0;
} 
