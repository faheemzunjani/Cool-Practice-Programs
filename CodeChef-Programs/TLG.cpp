#include<bits/stdc++.h>
using namespace std;
int main(){
	int w,t,x,y,i,l=0,a=0,b=0;
	cin >> t;
	for(i=0;i<t;i++)
	{

		cin >> x >> y;
		a = a + x;
		b = b + y;
		if(a-b>l)
		{
			l = a-b;

			w =1;
		}
		else if(b-a>l)
		{
			l = b - a;


			w = 2;
		}
	}

	cout << w << " " << l << endl;
	return 0;
}

