#include <stdio.h>

void matrixVectorMultiplication(int A[2][2], int x[2], int y[2]);
int main()
{
	printf("this program will ask you to enter 2x2 matrix and 1x2 vector and will multiply them\n");
	int A[2][2];
	int x[2];
	int y[2];
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("Enter A(%d,%d):",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("The Array You'v Entered is :\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	for(int i = 0 ; i < 2 ; i++)
	{
		printf("Enter x(%d):",i);
		scanf("%d",&x[i]);
	}
	printf("The Vector You've Entered is :\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		printf("%d\n",x[i]);
	}
	printf("\nAx =\n");
	matrixVectorMultiplication(A,x,y);
	for(int i = 0 ; i < 2 ; i++)
	{
		printf("%d\n",y[i]);
	}
	return 0;
}

void matrixVectorMultiplication(int A[2][2], int x[2], int y[2])
{
	for(int i = 0 ; i < 2 ; i++)
	{
		y[i] = 0;
		for(int j = 0 ; j < 2 ; j++)
		{
			y[i] += x[j] * A[i][j]; 
		}
	}
}

