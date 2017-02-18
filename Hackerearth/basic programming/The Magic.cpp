#include <iostream>
using namespace std;

int main()
{
    int n,i,t,res;
    cin>>t;
    while (t--)
    {
    	res=0;
    	cin>>n;
    	for (;n>0;n/=2)
    	{
    		res+=n%2;
       	}
    	cout<<res<<endl;
    }
    return 0;
}
