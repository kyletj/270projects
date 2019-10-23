#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
/*
int main()
{
	int z[8] = { 1, 6, 2, 10, 3, 1, 4, 2 };
	int x[8], y[8];
	int i;
	int n = 8;

	for (i = 0; i <= (n - 2) / 2; i++)
	{
		x[i] = z[2 * i];
	}
	for (i = 0; i <= (n - 2) / 2; i++)
	{
		y[i] = z[(2 * i) + 1];
	}
	printf("x[i]: ");
	for (i = 0; i <= (n - 2) / 2; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\ny[i]: ");
	for (i = 0; i <= (n - 2) / 2; i++)
	{
		printf("%d ", y[i]);
	}

	printf("\n\n");
	system("PAUSE");
	return(0);

}
*/
/*
int main()
{
	int x[5] = { 1, 3, 5, 7, 9 };
	int y[5] = { 2, 4, 6, 8, 10 };
	int i, n, z[10];
	n = 5;

	for (i = 0; i <= (2 * (n - 1)) + 1; i++)
	{
		if (i % 2 == 0)
		{
			z[i] = x[i / 2];
		}
		else
		{
			z[i] = y[(i - 1) / 2];
		}
	}
	printf("z[i]: ");
	for (i = 0; i <= (2 * (n - 1)) + 1; i++)
	{
		printf("%d ", z[i]);
	}

	printf("\n\n");
	system("PAUSE");
	return(0);
}
*/
/*
int main()
{
	float y[21];
	float t[21];
	int n, i;
	n = 21;
	FILE *fp;
	fp = fopen("rampFunctionSample.txt", "w");

	for (i = 0; i < n; i++)
	{
		t[i] = 0.1 * i;
	}
	for (i = 0; i < n; i++)
	{
		if (t[i] <= 1)
		{
			y[i] = 5 * t[i];
		}
		else
		{
			y[i] = 5;
		}
	}
	printf("t[i]   y[i]");
	for (i = 0; i < n; i++)
	{
		printf("\n%.3f  %.3f", t[i], y[i]);
	}
	fprintf(fp, "t[i]   y[i]");
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "\n%.3f  %.3f", t[i], y[i]);
	}
	
	fclose(fp);

	printf("\n\n");
	system("PAUSE");
	return(0);
}
*/
/*
int main()
{
	float y[41];
	float t[41];
	int n, i;
	n = 41;

	FILE *fp;
	fp = fopen("triangleFunctionSample.txt", "w");

	for (i = 0; i < n; i++)
	{
		t[i] = -2 + (0.1 * i);
	}
	for (i = 0; i < n; i++)
	{
		if (t[i] >= -2 && t[i] <= -1)
		{
			y[i] = 0;
		}
		if (t[i] > -1 && t[i] <= 0)
		{
			y[i] = y[i - 1] + 0.1;
		}
		if (t[i] > 0 && t[i] <= 1)
		{
			y[i] = y[i - 1] - 0.1;
		}
		if (t[i] > 1 && t[i] <= 2)
		{
			y[i] = 0;
		}
	}
	printf("t[i]   y[i]");
	for (i = 0; i < n; i++)
	{
		printf("\n%-.3f  %-.3f", t[i], y[i]);
	}
	fprintf(fp, "t[i]   y[i]");
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "\n%-.3f  %-.3f", t[i], y[i]);
	}

	fclose(fp);

	printf("\n\n");
	system("PAUSE");
	return(0);
}
*/

/*
//got it to work, but it takes up a shit ton more memory, because you have to
//store an array of 105 for your variables
//second go at the one TWO ABOVE
int main()
{
	float y[105];
	float t[105];
	int n, i;
	n = 105;
	FILE *fp;
	fp = fopen("rampFunctionSample.txt", "w");

	for (i = 0; i < n; i++)
	{
		t[i] = 0.1 * i;
	}
	for (i = 0; i <= (n - 1) / 5; i++)
	{
		if (t[i] <= 1)
		{
			y[i] = t[5 * i];
		}
		else
		{
			y[i] = 5;
		}
	}
	printf("t[i]   y[i]");
	for (i = 0; i <= (n - 1) / 5; i++)
	{
		printf("\n%.3f  %.3f", t[i], y[i]);
	}
	fprintf(fp, "t[i]   y[i]");
	for (i = 0; i <= (n - 1) / 5; i++)
	{
		fprintf(fp, "\n%.3f  %.3f", t[i], y[i]);
	}

	fclose(fp);

	printf("\n\n");
	system("PAUSE");
	return(0);
}
*/

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[10], i, n, k, p;
	n = 5;
	k = 2;
	p = 16;
	

	for (i = 0; i <= n; i++)
	{
		if (i < k)
		{
			y[i] = x[i];
		}
		else if (i == k) //make suure to use else if, it actually was important here
		{
			y[i] = p;
		}
		else
		{
			y[i] = x[i - 1];
		}
	}
	//printf("%d------- ", y[0]);
	printf("x[i]: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\ny[i]: ");
	for (i = 0; i <= n; i++)
	{
		printf("%d ", y[i]);
	}
	
	printf("\n\n");
	system("PAUSE");
	return(0);
}