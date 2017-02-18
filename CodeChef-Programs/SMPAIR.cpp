#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[0]+arr[1]<<endl;
    }
    return 0;
}
