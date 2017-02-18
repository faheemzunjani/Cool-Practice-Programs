#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int x1,x2,y1,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if (((y2-y1)*(x3-x1))==((y3-y1)*(x2-x1)))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
