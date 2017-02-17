#include <iostream>
using namespace std;
int main()
{
    int t,n,i,res;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>n;
        for (i=5;n>1;i*=5)
            {
                res+=n/5;
                n/=5;
            }
        cout<<res<<endl;
    }
    return 0;
}
