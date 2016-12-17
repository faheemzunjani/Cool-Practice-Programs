// Program to multiply two matrices and find the determinant of a matrix
// Faheem Hassan Zunjani

#include<stdio.h>

void prod_matrix(){
  int A[100][100], nr1, nc1, B[100][100], nr2, nc2;
  int prod[100][100],i=0,j=0,k=0,l=0,m=0,n=0,p=0;

  
  printf("For matrix A: \n");
  printf("Enter no of rows: ");
  scanf("%d",&nr1);
  printf("Enter no of columns: ");
  scanf("%d",&nc1);
  printf("Enter matrix: \n");
  for(k=0;k<nr1;k++)
    { for(l=0;l<nc1;l++)
	{ scanf("%d",&A[k][l]);
	}
    }
  printf("For matrix B: \n");
  printf("Enter no of rows: ");
  scanf("%d",&nr2);
  printf("Enter no of columns: ");
  scanf("%d",&nc2);
  printf("Enter matrix: \n");
  for(m=0;m<nr2;m++)
    { for(n=0;n<nc2;n++)
	{ scanf("%d",&B[m][n]);
	}
    }
  
  if(nc1!=nr2)
    { printf("Matrices are incompatible for multiplication! \n");
    }
  else
    { for(i=0;i<nr1;i++)
	{ for(j=0;j<nc2;j++)
	    { prod[i][j]=0;
	      for(p=0;p<nr2;p++)
		{ prod[i][j]=prod[i][j]+(A[i][p]*B[p][j]);
		}
	    }
	}
    }
  
  printf("The product of both matrices is: \n");
  
  for(l=0;l<nr1;l++)
    { for(m=0;m<nc2;m++)
	{ printf("%d ",prod[l][m]);
	}
      printf("\n");
    }
}

void det_matrix(){
  int A[3][3],det=0,i=0,j=0;
  
  printf("Enter array elements: \n");

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(j=0;j<3;j++){
    switch(j){
      case 0: det=det+ A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1]);
	break;
      case 1: det=det+ A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0]);
	break;
      case 2: det=det+ A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
	break;
    }
  }

  printf("Determinant of the matrix: %d \n",det);
}




void main(){
  int ch;

  printf("    Menu:\n");
  printf("1. Multiply two matrices \n");
  printf("2. Determinant of a 3x3 matrix \n");
  scanf("%d",&ch);

  switch(ch){
  case 1: prod_matrix();
    break;
  case 2: det_matrix();
    break;
  default: printf("Wrong choice!");
    break;
  }


}
