#include <bits/stdc++.h>
using namespace std;

int main()
{   int m,ans=0,i,l;
    cin>>m;
    while(m--)
    {
        stack<char> s;
        string a;
        cin>>a;
        l=a.length();
        for(i=0;i<l;i++)
        {
            if(s.empty())
            s.push(a[i]);
            else if(s.top()==a[i])
            s.pop();
            else
            s.push(a[i]);
        }
        if(s.size()==0)
        ans++;
    }
    cout<<ans;

    return 0;
}
