#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int sum=0,i;
    for (i=0;s[i]!='\0';i++)
    	{
    		sum+=(s[i]-96);
    	}
    printf("%d",sum);
    return 0;
}
