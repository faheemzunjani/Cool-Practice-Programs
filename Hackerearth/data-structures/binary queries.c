/*Some problems appear hard though they are very easy. Today Aakash is stuck in a range query problem. He has been given an array with only numbers 0 and 1. There are two types of queries -

0 L R : Check whether the number formed from the array elements L to R is even or odd and print EVEN or ODD respectively. Number formation is the binary number from the bits status in the array L to R

1 X : Flip the Xth bit in the array 

Indexing is 1 based

Input
First line contains a number N and Q as input. Next line contains N space separated 0 or 1. Next Q lines contain description of each query 

Output
Output for only query type 0 L R whether the number in range L to R is "EVEN" or "ODD" (without quotes).

Constraints
1? N ? 10^6 
1? L ? R ? 10^6 
1? Q ? 10^6

1? X ? N*/
#include<stdio.h>

int main()
{
	int n,q,i,k,l,r,x,in;
	scanf("%d %d",&n,&q);
	int ar[n+1];
	for(i=0;i<n;i++)
	scanf("%d ",&ar[i]);
for(k=0;k<q;k++)
{
    scanf("%d",&in);
	if(in==1)
	{
	    scanf("%d",&x);
	ar[x-1]=!ar[x-1];
	}
	else
	{
	scanf("%d %d",&l,&r);
if(ar[r-1]==1)
{
	printf("ODD\n");
}
else
{
	printf("EVEN\n");

}

}
}
return 0;
}
