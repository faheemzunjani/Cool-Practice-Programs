#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    int temp;
    cin>>t;
    while (t--)
    {
        set <long long int> s;
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>temp;
            s.insert(temp);
        }
        cout<<s.size()<<'\n';
    }
    return 0;
}
