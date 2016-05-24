T = int(input())

for k in range(0,T,1):
	N = int(input())

	A = [int(i) for i in input().split()]

	B = ['/', '*', '+', '-']

	result = A[0]
	j = 0
	len_A = len(A)

        for i in range(1, len_A, 1):
                j %= 4

                if (B[j] == '/'):
                	result = result // A[i]
                elif (B[j] == '*'):
                	result = result * A[i]
                elif (B[j] == '+'):
                	result = result + A[i]
                elif (B[j] == '-'):
                        if((result < 0) | (A[i] < 0)):
                                result = (result - A[i]) + 1
                        else:
                                result = result - A[i]
                j = j + 1
                
                if(j == 4):
                        B = B[1:] + B[:1]
                        
	print(result)
