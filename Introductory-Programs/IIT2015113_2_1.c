#include<stdio.h>

int highMatrix(int A[100][100],int r,int c){
	int max=A[0][0],p,q;

	for(p=0;p<r;p++){
		for(q=0;q<c;q++){
			if(A[p][q]>max){
				max=A[p][q];
			}
		}
	}

	return max;
}


int main(){
	int matrixA[100][100],row,col;
	int i,j,maxDig;

	scanf("%d %d",&row,&col);

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrixA[i][j]);
		}
	}

	maxDig=highMatrix(matrixA,row,col);

	printf("%d",maxDig);

	return 0;
}
