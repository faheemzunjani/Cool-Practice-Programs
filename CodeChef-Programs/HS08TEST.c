#include<stdio.h>
 
int main(){
	int withd;
	float abal;
 
	scanf("%d %f",&withd,&abal);
 
	if(((withd+0.50)>abal)||((withd%5)!=0)){
		printf("%.2f\n",abal);
	}
	else{
		printf("%.2f\n",(abal-withd-0.50));
	}
	return 0;
}