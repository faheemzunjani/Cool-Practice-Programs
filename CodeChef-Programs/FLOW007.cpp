#include <iostream>
using namespace std;
int main()
{
	int t,n,i,res;
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>n;
		for (i=0;n!=0;i++)
		{
			res=(res*10)+(n%10);
			n/=10;
		}
		cout<<res<<endl;
	}
	return 0;
} 
