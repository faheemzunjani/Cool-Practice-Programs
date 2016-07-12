#include<stdio.h>
 
int main(){
	long int N;
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%ld",&N);
		if(N%2==0){
			printf("%ld\n",N);
		}
		else{
			printf("%ld\n",(N-1));
		}
	}
	return 0;
}
 