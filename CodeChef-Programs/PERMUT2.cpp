#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    while (1)
    {
        cin>>n;
        if (n==0) break;
        int arr[n];
        int amb[n];
        int flag=0;
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            amb[arr[i]-1]=i+1;
        }
        for (i=0;i<n;i++)
        {
            if (arr[i]!=amb[i])
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;
    }
    return 0;
}
