#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,r,x[5],y[5],i;
float ch=0,cs=0,hs=0;
	cin >> t;
	while(t--)
	{
		cin >> r;
		for(i=0;i<3;i++)
		{
			cin >> x[i] >> y[i];
		}
		ch = sqrt(pow((x[1]-x[0]),2) + pow((y[1]-y[0]),2));
		cs = sqrt(pow((x[2]-x[0]),2) + pow((y[2]-y[0]),2));
		hs = sqrt(pow((x[1]-x[2]),2) + pow((y[1]-y[2]),2));
 if((ch <= r && cs <= r) || (ch <= r && hs <=r) || (cs <= r && hs <=r)) 
		{
			cout << "yes\n";
		}
		else 
		{
			cout << "no\n";
		}
	}
	return 0;
}
