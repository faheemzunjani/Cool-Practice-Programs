#include <iostream>
using namespace std;

int main()
{   long int j,n,d,i,a[100000],count=0;
    j=0;
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
         if(a[i]<=d)
        {   if(j==0||j==1)
            count++;
            else
            break;
        }
        else
        j++;
    }

    cout<<count;
    return 0;
}
