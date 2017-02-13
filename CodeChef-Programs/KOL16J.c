#include<stdio.h>
 
 main()
{
 
	int i=0,n,m,j=0,k=0,flag1=1,flag2=0,flag3=1,arr[500];
	
	scanf("%d",&n);
	while(i<n)
	{
		
		scanf("%d",&m);
		
		while(j<m)
		{
			scanf("%d",&arr[j]);
			if(arr[j]>m)
			flag1=0;
			j++;
		}
		j=0;
		while(j<m)
		{
			if((arr[j]) != (j+1))
			{
			 flag2=1;
 
			}
 
		 j++;
 
		}
		j=1;
		while(j<m)
		{
			while(k<j)
			{
			       if(arr[j]==arr[k])
				{
					flag3=0;
 
					}
					k++;
					}
		k=0;
		 j++;
 
 
 
		}
 
		if(flag1==1 && flag2==1 && flag3==1)
		printf("yes\n");
	else
	printf("no\n");
	j=0;
	k=0;
	flag1=1;
	flag2=0;
	flag3=1;
	i++;
	}
	
	}