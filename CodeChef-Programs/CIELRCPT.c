#include<stdio.h>
#include<math.h>
int main(){
	int i,t,p[100000],j,count,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		count=0;
		scanf("%d",&p[i]);
		for(j=1;j<12;j++)
		{
			if((pow(2,j))==p[i])
			{
				count++;
				break;
			}

			else if((pow(2,j))>p[i])
			{
				j=j-1;
				temp=pow(2,j);
				p[i]=p[i]-temp;
				count++;
				j=0;
				if(p[i]==0)
				{
					break;
				}
			}
			else if(p[i] > 2048)
			{
				j=11;
				temp = pow(2,j);
				p[i]=p[i]-temp;
				count++;
				j=0;
			}
		}
		printf("%d\n",count);
	}
}
