#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,t,b,ls;
	float rsmax,rsmin;
	cin >> t;
	while(t--)
	{
		rsmax = 0;
		rsmin = 0;
		cin >> b >> ls;
		rsmax = sqrt(pow(ls,2) + pow(b,2));
		rsmin = sqrt(pow(ls,2) - pow(b,2));
		cout << rsmin << " " << rsmax << endl;
	}
	return 0;
}
