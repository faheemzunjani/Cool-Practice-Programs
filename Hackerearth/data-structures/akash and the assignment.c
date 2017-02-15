#include <stdio.h>
 
int main()
{
	int stringLength,i,j,x;
	int numberOfQueries;
	int l,r,k,counter;
	
	scanf("%d %d",&stringLength,&numberOfQueries);
	char str[stringLength];
	int strMap[50005][26];
	scanf("%s",str);
	char strRev[stringLength+1];
	strRev[0]='0';
	for(i=1;i<stringLength+1;i++)
	{
		strRev[i]=str[i-1];
	}
	for(i=1;i<stringLength+1;i++)
	{
		x = strRev[i] - 'a';
		for(j=0;j<26;j++)
		{
			if(j==x)
			{
				
				strMap[i][j]= strMap[i-1][j] + 1 ;
			}
			else
			{
				strMap[i][j]=strMap[i-1][j];
			}
		}
	}
	
	counter=0;
	while(numberOfQueries--)
	{
		
		scanf("%d %d %d",&l,&r,&k);
		int K=0;
		for(j=0;j<26;j++)
		{
			
			K= K + (strMap[r][j] - strMap[l-1][j]);
			
				if(K>=k)
				{
					
					printf("%c\n",'a' + j);
					break;
				}
		}
		if(K<k)
		{
				printf("Out of range\n");
		}
		
		counter++;
	}
	
;
	

	return 0;
}