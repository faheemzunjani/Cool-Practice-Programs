#include <iostream>
using namespace std;

int main() {
long long int fact;
int t,q,n;
cin>>t;
while(t--)
{   fact=1;
    cin>>n;
    for(;n>0;n--)
    {
        fact=(fact*n)%1000000007;
    }
   cout<<fact<<"\n";

}

	return 0;
}
