#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i , t ;
	int n ;
	scanf("%d" , &n) ;		
	int a[n] ;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , a + i) ;
	}
	if(n == 1)
	{
		printf("%s\n", a[0] == 0 ? "YES" : "NO");
		return 0 ;	
	}
	if(n == 2)
	{
		printf("%s\n", a[0] == a[1] ? "YES" : "NO");
		return 0 ;
	}
	for(i = n - 2 ; i >= 0 ; i--)
	{		
		if(a[i] != 0)
		{
			if(a[i] >= a[i + 1])
			{
				a[i] -= a[i + 1] ;
				a[i + 1] = 0 ;
			}
			else
			{
				printf("NO\n" , i);
				return 0 ;
			}
		}
	}
	printf("%s\n", a[0] == 0 ? "YES" : "NO");
	return 0 ;
}