#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,counto,countz;
    string n;
    cin>>t;
    while (t--)
    {
        counto=0;
        countz=0;
        cin>>n;
        for (i=0;i<n.length();i++)
        {
            if (n[i]=='1')
                counto++;
            else
                countz++;
        }
        if (counto==1||countz==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
