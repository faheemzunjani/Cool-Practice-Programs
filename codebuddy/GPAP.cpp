#include <iostream>
using namespace std;

int main() {
long int a,b,c;
int ap=0,gp=0;
	cin>>a>>b>>c;
	if((2*b)==(a+c))
	{
	    ap=1;
	}
	if((b*b)==(a*c))
	{
	    gp=1;
	}
	if(ap==1&&gp==1)
	{
	    cout<<"Both";
	}
	else if(ap==1)
        cout<<"AP";
    else if(gp==1)
        cout<<"GP";
    else
        cout<<"None";
	return 0;
}
