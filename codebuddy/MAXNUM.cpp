#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,z,temp,maxx=0;
	cin >> x >> y >> z;
	temp = max(x,y);
	maxx = max(temp,z);
	cout << maxx << endl;
	return 0;
}
