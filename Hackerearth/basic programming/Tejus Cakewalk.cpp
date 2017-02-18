#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int freq[101]={0};
    int n,i;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int max=0;
    int maxnum=0;
    for (i=0;i<101;i++)
    {
        if (freq[i]>max)
        {
            max=freq[i];
            maxnum=i;
        }
    }
    int res=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]!=maxnum)
            res++;
    }
    cout<<res<<'\n';
    return 0;
}
