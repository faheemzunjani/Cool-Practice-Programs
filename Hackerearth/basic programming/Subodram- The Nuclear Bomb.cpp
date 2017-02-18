#include <bits/stdc++.h>
using namespace std;

long long int max(long long int arr[],long long int n)
{
    sort(arr, arr + n);
    if ((arr[n-3]==0)&&(arr[n-2]!=0))
    	return (arr[n-1]*arr[n-2]);
    else if ((arr[n-3]==0)&&(arr[n-2]==0))
    	return (arr[n-1]);
    else
    	return (arr[n-1]*arr[n-2]*arr[n-3]);
}

int main()
{
    long long int n,i; 
	cin>>n;
	long long int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
    long long int sol=max(arr,n);
    cout<<sol;
    return 0;
}