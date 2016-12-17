// Program to compare two strings and concatenate and print the first string if it matches

#include<stdio.h>


int stringCompare(char *strA, char *strB){
	int flag=0;
	char *p=strA;
	char *q=strB;

	for(;(*p!='\0');p++,q++){
		if(*p==*q){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	
	return flag;			
	
}	

char* stringConcat(char *strA, char *strB, char *concatStr){
	char *p=strA;
	char *q=strB;
	char *ccs=concatStr;

	for(;*p!='\0';p++,ccs++){
		*ccs=*p;
	}
	
	for(;*q!='\0';q++,ccs++){
		*ccs=*q;
	}
	
	*ccs='\0';

	return concatStr;
}

int main(){
	int flag=0;	
	char stringA[1000], stringB[1000], ccString[2000];
	char *ccStringPtr;

	scanf("%s %s",stringA,stringB);
	
	flag=stringCompare(stringA,stringB);

	if(flag==1){
		printf("%s",stringA);
	}
	else{
		ccStringPtr=stringConcat(stringA,stringB,ccString);
		printf("%s",ccStringPtr);
	}

	return 0;
}
