#include<stdio.h>

int main(){
	char strA[1000],strB[1000];

	scanf("%s",strA);
	scanf("%s",strB);

	char *p=strA;
	char *q=strB;

	for(;*q!='\0';q++){
		p=strA;

		for(;*p!='\0';p++){
			if(*p==*q){
				printf("%c",*p);
				*p='~';
				break;
			}
		}

	}

	return 0;
}			
