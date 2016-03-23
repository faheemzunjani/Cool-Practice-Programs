// Program to perform basic operations on matrices
// Faheem Hassan Zunjani

#include <stdio.h>
#include <ctype.h>

void tran_matrix()
{
	int B[1000][1000],C[1000][1000],i=0,j=0,k=0,l=0;
  	int nr1=0,nc1=0;
 
  	printf("Enter no of rows: ");
  	scanf("%d",&nr1);
  	printf("Enter no of columns: ");
  	scanf("%d",&nc1);
  	printf("Enter matrix: \n");

  	for(i=0; i<nr1; i++) { 
  		for(j=0; j<nc1; j++) {
  			scanf("%d",&C[i][j]);
		}
	}
  
  	for(i=0; i<nr1; i++) {
  		for(j=0;j<nc1; j++) {
  			B[j][i]=C[i][j];
		}
    }
  
  	printf("\nTranspose of the matrix is: \n");

  	for(k=0;k<nr1;k++) {
  		for(l=0;l<nc1;l++) {
  			printf("%d ",B[k][l]);
		}
      	printf("\n");
    }
}

void sum_matrix(){
  int A[1000][1000],nr1, nc1, B[1000][1000], nr2, nc2;
  int i=0,j=0,m=0,n=0,k=0,l=0;

  
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
  
  if((nr1!=nr2)||(nc1!=nc2))
    { printf("\nMatrices are incompatible for their sum! \n");
    }
  else
    { printf("Sum of both matrices is: \n");
      for(i=0;i<nr1;i++)
	{ for(j=0;j<nc1;j++)
	    { printf("%d ",(A[i][j]+B[i][j]));
	    }
	  printf("\n");
	}
    }
}

void diff_matrix(){
  int A[1000][1000], nr1, nc1,B[1000][1000], nr2, nc2;
  int i=0,j=0,m=0,n=0,k=0,l=0;

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
  
  if((nr1!=nr2)||(nc1!=nc2))
    { printf("\nMatrices are incompatible for their difference! \n");
    }
  else
    { printf("Difference of both matrices is: \n");
      for(i=0;i<nr1;i++)
	{ for(j=0;j<nc1;j++)
	    { printf("%d ",(A[i][j]-B[i][j]));
	    }
	  printf("\n");
	}
    }
}

void prod_matrix(){
  int A[1000][1000], nr1, nc1, B[1000][1000], nr2, nc2;
  int prod[1000][1000],i=0,j=0,k=0,l=0,m=0,n=0,p=0;

  
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


int main(){
  int A[1000][1000],B[1000][1000],C[1000][1000];
  int i=0,j=0,k=0,l=0,m=0,n=0;
  int nr1,nr2,nc1,nc2;
  char ch;

  printf("        Menu \n");
  printf("A. Add two matrices \n");
  printf("B. Subtract two matrices \n");
  printf("C. Generate transpose of a matrix \n");
  printf("D. Multiply two matrices \n");
  printf("Enter choice: ");
  scanf("%c",&ch);

  ch=toupper(ch);
 
  switch(ch)
    { case 'A': sum_matrix();
	        break;
      case 'B': diff_matrix();
                break;
      case 'C': tran_matrix();
                break;
      case 'D': prod_matrix();
                break;
    }
  
  return 0;
}
