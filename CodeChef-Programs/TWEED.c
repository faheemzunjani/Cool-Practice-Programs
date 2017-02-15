    #include<stdio.h>
     
    int main()
    {
    	char str[4];
    	int t,n,i;
    	int arr[51];
    	scanf("%d",&t);
    	while(t--)
    	{
    		scanf("%d%s",&n,str);
    		for(i=0;i<n;i++)
    			scanf("%d",&arr[i]);
    		if(n==1 && str[1]=='e' && (arr[0]%2)==0)
    			printf("Dee\n");
    		else printf("Dum\n");
    	}
    	return 0;
    } 