#include <iostream>
using namespace std;

int main()
{
    long long int n,a[1000001],i,c=1;
   cin>>n;
   cin>>a[0];
   for(i=1;i<n;i++)
   {
       cin>>a[i];
       if(a[i-1]>a[i])
       c++;

   }

   cout<<c;
    return 0;
}
