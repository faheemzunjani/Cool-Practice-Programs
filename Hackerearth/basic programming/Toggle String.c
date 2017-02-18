#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int i;
	for (i=0;str[i]!=NULL;i++)
		{
			if ((str[i]>='a')&&(str[i]<='z'))
				str[i]-=32;
			else if ((str[i]>='A')&&(str[i]<='Z'))
				str[i]+=32;
		}
	printf("%s",str);
    return 0;
}
