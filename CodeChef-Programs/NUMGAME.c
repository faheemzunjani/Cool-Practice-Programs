#include<stdio.h>
 
int main(){
	long int N;
	int t,i;
	
	scanf("%d",&t);
 
	for(i=0;i<t;i++){
		scanf("%ld",&N);
		if(N%2==0){
			printf("ALICE\n");
		}
		else{
			printf("BOB\n");
		}
	
	}
	return 0;
}
 