#include <stdio.h>
#include<ctype.h>


int main(void)
{
char ch;
scanf("%c",&ch);
if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("YES");
else
printf("NO");
return 0;
}
