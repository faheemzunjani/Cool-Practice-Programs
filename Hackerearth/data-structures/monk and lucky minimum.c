#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int t,i;
	int n,j,c;
	long int ar[100000],min;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		cin>>ar[j];
	min=ar[0];
	for(j=0;j<n;j++)
		if(ar[j]<min)
			min=ar[j];
		c=0;
for(j=0;j<n;j++)
	if(ar[j]==min)
		c++;
	if(c%2==0)
	cout<<"Unlucky\n";
	else
	cout<<"Lucky\n";
	}
}