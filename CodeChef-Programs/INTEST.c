#include<stdio.h>
 
int main(){
	int n,i,count=0;
	long int k,t;
 
	scanf("%d %ld",&n,&k);
 
	for(i=0;i<n;i++){
		scanf("%ld",&t);
		if(t%k==0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
 