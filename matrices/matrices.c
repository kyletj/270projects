
#define COLS_MAX 1000

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
/*
int main()
{
	int i, j;
	int numRows = 5;
	int numCols = 3;

	for (i = 0; i < numRows; i++)
	{
		printf("\n");
		for (j = 0; j < numCols; j++)
		{
			printf("%d_%d ", i, j);
		}
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
}
*/



void matrixVectorProduct(int n, int m, float A[][COLS_MAX], float x[], float y[])
{
	int i, j;
	for (i = 0; i < n; i++)
	{

		for (j = 1; j < m; j++)
		{
			y[i] = (x[j] * A[i][j]) + (x[j - 1] * A[i][j - 1]);
		}
	}
}

int getRowSum(int n, int m, int A[][COLS_MAX], int row)
{
	int i, j;
	int sum;
	sum = 0;
	for (j = 0; j < m; j++)
	{
		sum = sum + A[row][j];
	}
	return(sum);
}

void matrixAddition(int n, int m, int A[][COLS_MAX], int B[][COLS_MAX], int C[][COLS_MAX])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void scalarMultiply(int n, int m, int A[][COLS_MAX], int scalar, int AScalar[][COLS_MAX])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			AScalar[i][j] = scalar * A[i][j];
		}
	}
}

int getSum(int n, int a[])
{
	int i;
	float sum;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	return(sum);
}

void setupRandMatrix(int n, int m, int A[][COLS_MAX], int min, int max) {
	srand(time(NULL));
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			A[i][j] = min + rand() % (max - min) + 1;
		}
	}
}

void printMatrix(int n, int m, int A[][COLS_MAX], char label[])
{
	int i, j;
	printf("%s: ", label);
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < m; j++)
		{
			printf("A[%d][%d]: % -4d ", i, j, A[i][j]);
		}
	}
}

/*
int main()
{
	
	srand(time(NULL));

	int i, j;
	int numRows = 5;
	int numCols = 3;

	int A[5][3];

	for (i = 0; i < numRows; i++)
	{
		for (j = 0; j < numCols; j++)
		{
			A[i][j] = rand() % 11;
		}
	}


	for (i = 0; i < numRows; i++)
	{
		printf("\n");
		for (j = 0; j < numCols; j++)
		{
			printf("A[%d][%d] = %-2d ", i, j, A[i][j]);
		}
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
	
	
	int i, j;
	int A[3][5];

	setupRandMatrix(3, 5, A, -10, 10);

	printMatrix(3, 5, A, "myMatrix");

	//
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
		{
			printf("%d ", A[i][j]);
		}
	}

	printf("\n\n");
	system("PAUSE");
	return(0);

}
*/
/*
int main()
{
	int i, j;

	int sum[10];
	float avg[10];

	int scores[10][5];

	setupRandMatrix(10, 5, scores, 60, 100);

	printMatrix(10, 5, scores, "myScores");

	for (i = 0; i < 10; i++)
	{
		sum[i] = getSum(5, scores[i]);
	}

	for (i = 0; i < 10; i++)
	{
		avg[i] = (float) sum[i] / 5;
	}

	for (i = 0; i < 10; i++)
	{
		printf("\navg[%d]: %f", i, avg[i]);
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
	
}

*/

int main()
{
	int i, j;
	int sum;

	int A[2][COLS_MAX] = { {1, 2, 3}, {4, 5, 6} };
	int ANew[2][COLS_MAX];
	int SumAANew[2][COLS_MAX];

	printMatrix(2, 3, A, "Matrix");

	scalarMultiply(2, 3, A, 2, ANew);
	printf("\n");
	printMatrix(2, 3, ANew, "scalarMultiply");

	matrixAddition(2, 3, A, ANew, SumAANew);
	printf("\n");
	printMatrix(2, 3, SumAANew, "Sum");

	sum = getRowSum(2, 3, SumAANew, 0);
	printf("\nsum: %d", sum);

	float B[2][COLS_MAX] = { {1, 2}, {3, 4} };
	float x[2] = { 2, 4 };
	float y[2];


	matrixVectorProduct(2, 2, B, x, y);
	printf("\nvector product: ");
	for (i = 0; i < 2; i++)
	{
		printf("%f ", y[i]);
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
}