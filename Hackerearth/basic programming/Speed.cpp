#include <iostream>
using namespace std;

int main()
{
    int t,n,i,count;
    cin>>t;
    while (t--)
    {
    	count=1;
    	cin>>n;
    	int arr[n],changed[n];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		changed[i]=arr[i];
    	}
    	for (i=1;i<n;i++)
    	{
    		if (changed[i]>changed[i-1])
    			changed[i]=changed[i-1];
    		if (changed[i]==arr[i])
    			count++;
    	}
    	cout<<count<<endl;
    }
    return 0;
}
