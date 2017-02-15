#include <stdio.h>

int main()
{
    int n,h=0,a=0,c=0,k=0,e=0,r=0,t=0,w=0,i;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
    	switch(s[i])
    	{
    		case 'a':a++;
    		break;
    		case 'h':h++;
    		break;
    		case 'c':c++;
    		break;
    		case 'k':k++;
    		break;
    		case 'e':e++;
    		break;
    		case 'r':r++;
    		break;
    		case 't':t++;
    		break;
    	}
    }
    w=h/2;
    if(a/2<w)
    w=a/2;
    if(c<w)
    w=c;
    if(k<w)
    w=k;
    if(e/2<w)
    w=e/2;
    if(r/2<w)
    w=r/2;
    if(t<w)
    w=t;
    printf("%d",w);
   return 0;
}
