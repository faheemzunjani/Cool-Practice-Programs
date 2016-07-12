#include<stdio.h>
#include<algorithm>
 
int main(){
        int T,N,i,j;
        long long int S[5000],minDiff;
 
        scanf("%d",&T);
 
	for(j=0;j<T;j++){
	        scanf("%d",&N);
 
	        for(i=0;i<N;i++){
        	        scanf("%lld",&S[i]);
        	}	
 
		std::sort(S,S+N);
		minDiff=S[1]-S[0];
 
		for(i=2;i<N;i++){
			if((S[i]-S[i-1])<minDiff){
				minDiff=S[i]-S[i-1];
			}
		}
 
		printf("%lld\n",minDiff);
	}
 
        return 0;
}