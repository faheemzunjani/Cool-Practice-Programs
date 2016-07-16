#include<stdio.h>
#include<math.h>
 
int prime(long int x){
	long int j=3;
	int flag=1;
 
	if(x==2){
		return 1;
	}
	for(j=2;j<=sqrt(x);j++){
		if(x%j==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		return 1;
	}
	else{
		return 0;
	}
}		
		
int palin(long int x){
	long int y=0,z=x;
	
	for(;x!=0;){
		y*=10;
		y+=(x%10);
		x/=10;
	}
	if(z==y){
		return 1;
	}
	else{
		return 0;
	}
}
 
int main(){
	long int N;
	int i,flag=0;
 
	scanf("%ld",&N);
	
	if(N<10){
		N=10;
	}
	else if(N>11&&N<100){
		N=100;
	}
	for(i=N;flag!=1;i++){
		if(prime(i)&&palin(i)){
			printf("%d\n",i);
			flag=1;
		}
		
	}
	
	return 0;
}