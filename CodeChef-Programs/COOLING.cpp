#include<stdio.h>
#include<algorithm>
 
int main(){
	int t,N,i,pie[30],rack[30],j,k,count=0;
 
	scanf("%d",&t);
 
	for(i=0;i<t;i++){
		scanf("%d",&N);
		count=0;
		for(j=0;j<N;j++){
			scanf("%d",&pie[j]);
		}
		for(j=0;j<N;j++){
			scanf("%d",&rack[j]);
		}
		std::sort(pie,pie+N);
		std::sort(rack,rack+N);
		for(k=0,j=0;k<N;k++){
			if(pie[j]<=rack[k]){
				count++;
				j++;
			}
 
		}
		printf("%d\n",count);
	}
	return 0;
}
 