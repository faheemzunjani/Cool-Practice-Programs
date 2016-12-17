#include<stdio.h>

void remNum(char *stringA,char *stringB){

	char ch;
	int flag=0;

	char *pA=stringA;
	char *qB=stringB;

	for(;*pA!='\0';pA++){
		ch=*pA;
		flag=0;

		switch(ch){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9': flag=1;
				  break;
		}
		
		if(flag==0){
			*qB=*pA;
			qB++;
		}
	}

}
		
int main(){
	
	char strA[1000],strB[1000];

	scanf("%s",strA);

	remNum(strA,strB);

	printf("%s",strB);

	return 0;
}
