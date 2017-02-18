#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,ol,nl,j;
    char s[200];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    	{
    		scanf("%s",s);
    		ol=strlen(s);
    		nl=ol;
    		for(j=0;j<ol;j++)
    			{
    				if ((s[j]=='a')||(s[j]=='e')||(s[j]=='i')||(s[j]=='o')||(s[j]=='u'))
    				nl--;
    			}
    		nl++;
    		if ((s[0]=='w')||(s[1]=='w')||(s[j]=='w'))
    			nl-=4;
    		printf("%d/%d\n",nl,ol);
    	}
    
    return 0;
}
