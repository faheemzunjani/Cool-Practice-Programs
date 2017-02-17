#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    map < pair<int,int>, pair<int,int> > m;
    map < pair<int,int>, pair<int,int> >::iterator it;
    int i,n,d,id,attr,val,p;
    pair <int,int> p1,p2,p3;
    cin>>n>>d;
    for (i=0;i<n;i++)
    {
        cin>>id>>attr>>val>>p;
        p1=make_pair(id,attr);
        p2=make_pair(val,p);
        it=m.find(p1);
        if (it!=m.end())
        {
            p3=it->second;
            if (p2.second>=p3.second)
                m[p1]=p2;
        }
        else
        {
            m[p1]=p2;
        }
    }
    int res;
    while (d--)
    {
        cin>>id>>attr;
        p1=make_pair(id,attr);
        it=m.find(p1);
        res=(it->second).first;
        cout<<res<<'\n';
    }
    return 0;
}
