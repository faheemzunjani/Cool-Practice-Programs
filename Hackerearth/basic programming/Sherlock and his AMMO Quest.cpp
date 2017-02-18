#include <bits/stdc++.h>
using namespace std;
 
struct point
{
    string a;
    int b;
};
 
bool comp(struct point x,struct point y)
{
    if (x.b!=y.b)
    {
        if (x.b<y.b)
            return false;
        else
            return true;
    }
    else
    {
        if (x.a<y.a)
            return true;
        else
            return false;
    }
    return true;
}
 
int main()
{
    int n,i;
    cin>>n;
    struct point arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i].a>>arr[i].b;
    }
    sort(arr,arr+n,comp);
    for (i=0;i<n;i++)
    {
        cout<<arr[i].a<<" "<<arr[i].b<<'\n';
    }
    return 0;
}
