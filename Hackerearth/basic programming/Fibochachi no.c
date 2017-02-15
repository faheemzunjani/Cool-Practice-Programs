/*You are given an integer N, print the Nth fibo-chachi number.

we define Nth fibo-chachi number as
f(N)=f(N-1)+f(N-3)+f(N-5)
f(0)=f(1)=f(2)=f(3)=f(4)=1

Input :
First line will contain an integer 'T' (number of test cases ). 
For each test case there is an integer 'N'.

output :
for each test case print Nth fibo-chachi number.

constraints :
1<=T<=86
0<=N<=85

Note : use long long as the answer might not fit in 32-bit integer.*/
#include<stdio.h>
int main()
{
	int t,no,i,j;
	long long int ar[86];
	scanf("%d",&t);
	for(i=0;i<86;i++)
		{
			if(i<=4)
			{
				ar[i]=1;
			}
			else
				ar[i]=ar[i-1]+ar[i-3]+ar[i-5];
		}

	for(j=0;j<t;j++)
	{
		scanf("%d",&no);
		printf("%lld\n",ar[no]);

	}
return 0;

}