#include <iostream>
using namespace std;

int main()
{
    int t,n,k,p,i,rem;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k>>p;
    	for (i=0;i<k;i++)
    	{
    		cin>>rem;
    		if (rem<=p)
    			p++;
    	}
    	if (p<=n)
    		cout<<p<<endl;
    	else
    		cout<<"-1"<<endl;
    }
    return 0;
}
