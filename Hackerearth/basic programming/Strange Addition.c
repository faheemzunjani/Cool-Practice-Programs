#include <stdio.h>

int reverse(int num)
	{
	int newNum = 0;
	while(num>0){
		newNum = newNum*10 + num%10;
		num/=10;
	}
	return newNum;
	}
	
int strangeAddition(int a,int b)
	{
		return reverse(reverse(a) + reverse(b));
	}
int main() 
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",strangeAddition(a,b));
	}
}