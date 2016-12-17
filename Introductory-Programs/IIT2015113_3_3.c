// Program to read only characters from the file "1.txt", create a string of it and display it

#include<stdio.h>

int main(){
	FILE *filePtr;
	int flag=0,i=0;
	char dispStr[1000], ch;

	filePtr=fopen("1.txt","r");
	if(filePtr!=NULL){
		while(!feof(filePtr)){
			ch=getc(filePtr);
			
			switch(ch){
				case '\n':
				case '\t':
				case ' ':
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
				default:  flag=0;
					break;
			}
		
			if(flag==0){
				dispStr[i]=ch;
				i++;
			}
			else{
				flag=0;
			}		

		}
	}
	else{
		printf("File not found!");
	}
	
	i--;
	dispStr[i]='\0';

	printf("%s",dispStr);

	return 0;
}
