#include<stdio.h>
 
int cc_payup(int *A,int m){
	for(;*A!=0;A++){
		if(*A==m){
			return 1;
		}	
		else if(*A<m){
			return cc_payup(A+1,m-*A)||cc_payup(A+1,m);
		}
	}
	return 0;
}
 
 
int main(){
	int A[1000],i,j,t,n,m;
 
	scanf("%d",&t);
 
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
 
		for(j=0;j<n;j++){
			scanf("%d",&A[j]);
		}
		A[n]=0;
		if(cc_payup(A,m)==1){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
 
	return 0;
}
 