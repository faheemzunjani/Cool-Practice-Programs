
#include<stdio.h>
#include<math.h>
int main(){
	int t;
	char s[100];
	long long int mod=8589934592;
	long long int p,n;
	scanf("%d",&t);
	int i=1;
	while(i<=t){
		scanf("%lld",&n);
		if(n==0){
			printf("Case %d: 0\n",i);
		}
		else if(n<=33){
			p=(long long int)(pow(2,n)-1);
			printf("Case %d: %lld\n",i,p);
		}
		else{
			printf("Case %d: 8589934591\n",i);
		}
		i++;
	}
	return 0;
}