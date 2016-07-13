#include<stdio.h>
#include<algorithm>
 
int main(){
	int A[100],max,maxdig,t,i,j,k,n,count;
 
	scanf("%d",&t);
 
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d",&A[j]);
		}
		std::sort(A,A+n);
		count=1;
		max=1;
		maxdig=A[0];
		for(j=0,k=0;j<n;j++){
			if(A[j]==A[j+1]){
				count++;
				if(count>max){
					maxdig=A[j];
					max=count;
				}		
	
			}
			else{
				count=1;
			}
 
		}
		printf("%d %d\n",maxdig,max);
	}
 
	return 0;
}
 