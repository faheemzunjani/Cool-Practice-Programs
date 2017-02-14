#include <iostream>
using namespace std;

int main() {
int m,n,a,b,t,i;
cin>>t;
for(i=0;i<t;i++)
 {
     cin>>m>>n;
     a=m;
     b=n;
     while(a!=b)
     {
         if(a<b)
         {
             a=a+m;
         }
         else
         b=b+n;
     }
 cout<<a<<"\n";

 }

	return 0;
}
