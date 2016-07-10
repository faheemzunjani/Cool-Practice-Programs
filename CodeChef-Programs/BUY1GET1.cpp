#include<stdio.h>
#include<string.h>
#include<algorithm>
 
int main(){
	char s[200];
	int t,len,cost=0;
	scanf("%d",&t);
 
	for(int i=0;i<t;i++){
		
		scanf("%s",s);
		len=strlen(s);
		std::sort(s,s+len);
		cost=0;
 
		for(int i=0;i<len;i++){
			if(s[i]==s[i+1]){
				cost++;
				i++;
			}
			else{
				cost++;
			}
		}
		
		printf("%d\n",cost);
		
	}
 
	return 0;
}
	