#include <iostream>
using namespace std;

int main()
{
    int n,total=0,i;
    cin>>n;
    for (i=5;(n/i)>=1;i*=5)
    {
    		total+=(n/i);
    }
    cout<<total;
    return 0;
}
