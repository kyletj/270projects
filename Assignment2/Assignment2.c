#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	FILE *fp;
	fp = fopen("Assignment2.txt", "w");

	float a, b, c, discriminant, x1, x2, realComponent, imaginaryComponent;

	printf("Quadratic Equation Solver\n\n");
	printf("Please enter the value of a: ");
	scanf("%f", &a);
	printf("Please enter the value of b: ");
	scanf("%f", &b);
	printf("Please enter the value of c: ");
	scanf("%f", &c);

	fprintf(fp, "Quadratic Equation Solver-----------------------\n\n");
	fprintf(fp, "Please enter the value of a: %f\n", a);
	fprintf(fp, "Please enter the value of b: %f\n", b);
	fprintf(fp, "Please enter the value of c: %f\n", c);


	discriminant = b * b - 4 * a*c;

	if (discriminant == 0)
	{
		printf("\n\nRepeated Roots\n\n");

		x1 = (b*-1 + sqrt(discriminant)) / (2 * a);
		x2 = (b*-1 - sqrt(discriminant)) / (2 * a);

		printf("x1: %f\n", x1);
		printf("x2: %f\n", x2);

		fprintf(fp, "\n\nRepeated Roots------------------------------\n\n");
		fprintf(fp, "x1: %f\n", x1);
		fprintf(fp, "x2: %f\n", x2);
		fprintf(fp, "-----------------------------------------------\n");

	}
	else if (discriminant > 0)
	{
		printf("\n\nDistinct Real Roots\n\n");

		x1 = (b*-1 + sqrt(discriminant)) / (2 * a);
		x2 = (b*-1 - sqrt(discriminant)) / (2 * a);

		printf("x1: %f\n", x1);
		printf("x2: %f\n", x2);

		fprintf(fp, "\n\nDistinct Real Roots-------------------------\n\n");
		fprintf(fp, "x1: %f\n", x1);
		fprintf(fp, "x2: %f\n", x2);
		fprintf(fp, "-----------------------------------------------\n");

	}
	else
	{
		printf("\n\nComplex Roots\n\n");

		realComponent = -b / (2 * a);
		imaginaryComponent = sqrt(abs(discriminant)) / (2 * a);
		
		printf("x1: %f + i%f\n", realComponent, imaginaryComponent);
		printf("x2: %f - i%f\n", realComponent, imaginaryComponent);

		fprintf(fp, "\n\nComplex Roots-------------------------------\n\n");
		fprintf(fp, "x1: %f + i%f\n", realComponent, imaginaryComponent);
		fprintf(fp, "x2: %f - i%f\n", realComponent, imaginaryComponent);
		fprintf(fp, "-----------------------------------------------\n");

	}

	fclose(fp);

	system("PAUSE");

	return (0);
}