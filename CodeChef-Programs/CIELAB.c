#include<stdio.h>
 
int main(){
	int A,B,D;
 
	scanf("%d %d",&A,&B);
	
	D=A-B;
	
	if(D%10==0){
		D+=1;
	}
	else if(D%10==9){
		D-=1;
	}	
	else{
		D++;
	}
 
	printf("%d",D);
 
	return 0;
}
 