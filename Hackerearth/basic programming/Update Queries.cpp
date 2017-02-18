#include <iostream>
using namespace std;

int main()
{
    long long int n,q,l,r,v,i;
    cin>>n;
    long long int arr[100001];
    long long int add[100001];
    for (i=0;i<n;i++){
    	cin>>arr[i];
    	add[i]=0;
    }
    cin>>q;
    while (q--)
    {
    	cin>>l>>r>>v;
    	add[l-1]+=v;
    	add[r]-=v;
    }
    for (i=1;i<n;i++)
    	{
    		add[i]+=add[i-1];
    	}
    for (i=0;i<n;i++)
    	{
    		arr[i]+=add[i];
    	}
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}
