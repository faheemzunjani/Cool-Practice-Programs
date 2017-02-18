#include<stdio.h>
void main()
{
	int t,n,i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		count = 0;
		scanf("%d",&n);
		char a[n];
		scanf("%s",a);
		for(j=0 ; j<n ; j++)
		{
			if(a[j] == 'I' || a[j]=='Y')
			{
				if(a[j] == 'I')
				{
					printf("INDIAN\n");
					break;
				}
				else
				{
					printf("NOT INDIAN\n");
					break;
				}
			}
			else
			count++ ;
		}
		if(count == n)
		printf("NOT SURE\n");
	}
}