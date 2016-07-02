#include<stdio.h>
 
int main(){
	char str[100];
	int t,count=0;
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		count=0;
		scanf("%s",str);
		for(int j=0;str[j]!='\0';j++){
			if(str[j]=='A'||str[j]=='D'||str[j]=='O'||str[j]=='P'||str[j]=='R'||str[j]=='Q'){
				count++;
			}
			else if(str[j]=='B'){
				count+=2;
			}
		}
		printf("%d\n",count);
	}
 
	return 0;
} 