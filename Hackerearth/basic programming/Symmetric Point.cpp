#include <iostream>
using namespace std;

int main()
{
    int t,px,py,qx,qy;
    cin>>t;
    while (t--)
    {
    	cin>>px>>py>>qx>>qy;
    	cout<<(2*qx)-px<<" "<<(2*qy)-py<<endl;
    }
    return 0;
}
