
#include<stdio.h>
 
int get_gcd(int a, int b)
{
	int c = a%b;
	if(c == 0)
		return b;
	else
		return get_gcd(b, c);
}
 
main()
{
	int T;
	int ing[50];
	scanf("%d", &T);
 
	while(T-- > 0)
	{
		int N, i, min = 1001, second_min, fact, denom;
		
		scanf("%d", &N);
		
		for(i = 0; i < N; i++)
		{
			scanf("%d", &ing[i]);
		
			if(min > ing[i])
			{
				second_min = min;
				min = ing[i];
			}
			else if(second_min > ing[i])
				second_min = ing[i];
		}
 
		fact = get_gcd(second_min, min);
 
		while(fact != 1)
		{
			for(i = 0; i < N; i++)
			{
				if(ing[i]%fact)
					break;
			}
 
			if(i == N)
				break;
			fact--;
			while(min%fact || second_min%fact)
				fact--;
		}
			
		if(fact != 1)
		{
			for(i = 0; i < N-1; i++)
				printf("%d ", ing[i]/fact);
			printf("%d", ing[i]/fact);
		}
		else
		{
			for(i = 0; i < N-1; i++)
				printf("%d ", ing[i]);
			printf("%d", ing[i]);
		}
		printf("\n");
	}
 
	return 0;
}
 

