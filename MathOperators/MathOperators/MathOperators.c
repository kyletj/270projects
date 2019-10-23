#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

//basic math in initialization thingy
/*
int main()
{
	int q = 9 + 8 / (2 * (14 / 7)) - 1;
	printf("\nThe integer q is equal to: %d\n\n", q);
	system("PAUSE");
}
*/

//Calculates the area of any given triangle given the base and height
/*
int main()
{
	float b, h;
	float a;
	
	printf("Triangle Computation ------------\n\n");
	printf("Please enter the base: ");
	scanf_s("%f", &b);
	printf("Please enter the height: ");
	scanf_s("%f", &h);

	a = .5 * b * h;

	printf("\nArea: %.1f\n", a);
	printf("---------------------------------\n\n");
	system("PAUSE");
}
*/

//Computes the perimeter of a rectangle given the length and width
/*
int main()
{
	float l, w, p;

	printf("\nPerimeter Computation\n");
	printf("\nPlease enter a length: ");
	scanf_s("%f", &l);
	printf("\nPlease enter a width: ");
	scanf_s("%f", &w);
	
	p = 2 * (l + w);

	printf("\nPerimeter: %.1f\n\n", p);

	system("PAUSE");
}
*/

//Computes diameter, area, and perimeter of a circle of given radius
/*
int main()
{
	float r, d, a, p, pi;
	pi = 3.14159;

	printf("Diameter, Area, and Perimeter Computation for any given circle\n\n");

	printf("\nPlease enter the radius: ");
	scanf_s("%f", &r);

	d = 2 * r;
	a = pi * (r * r);
	p = 2 * pi * r;

	printf("\nDiameter: %f", d);
	printf("\nArea: %f", a);
	printf("\nPerimeter: %f\n\n", p);

	system("PAUSE");
}
*/

/*
//Functioning calculator for finding the slope, equation, and x and y intercepts of a line, as well as the midpoint of the two points
int main()
{
	float x1, x2, y1, y2, slope, yintercept, xintercept, x, y, midx, midy;
	char enterKey;
	x = 0;
	y = 0;

	printf("Enter the first coordinate\n");
	printf("\nx1: ");
	scanf_s("%f", &x1);
	printf("y1: ");
	scanf_s("%f", &y1);
	scanf_s("%c", &enterKey);
	printf("Enter the second coordinate\n");
	printf("\nx2: ");
	scanf_s("%f", &x2);
	printf("y2: ");
	scanf_s("%f", &y2);

	slope = (y2 - y1) / (x2 - x1);
	yintercept = slope * (x - x1) + y1;
	xintercept = ((y - y1) / slope) + x1;
	midx = (x2 + x1) / 2;
	midy = (y2 + y1) / 2;

	printf("Slope: %.1f\n", slope);
	printf("Equation of Line: y = %.1f * (x - %.1f) + %.1f\n", slope, x1, y1);
	printf("Y intercept: %.3f\n", yintercept);
	printf("X intercept: %.3f\n", xintercept);
	printf("Midpoint: (%.3f, %.3f)\n\n\n\n", midx, midy);

	printf("Address   Contents   Variable");
	printf("\n%p    %.3f       x1", &x1, x1);
	printf("\n%p    %.3f       x2", &x2, x2);
	printf("\n%p    %.3f       y1", &y1, y1);
	printf("\n%p    %.3f       y2", &y2, y2);
	printf("\n%p    %.3f       slope", &slope, slope);
	printf("\n%p    %.3f       yintercept", &yintercept, yintercept);
	printf("\n%p    %.3f       xintercept", &xintercept, xintercept);
	printf("\n%p    %.3f       x", &x, x);
	printf("\n%p    %.3f       y", &y, y);
	printf("\n%p    %.3f       midx", &midx, midx);
	printf("\n%p    %.3f       midy", &midy, midy);
	printf("\n%p    %c         enterKey\n\n\n\n\n", &enterKey, enterKey);

	system("PAUSE");

}
*/

//Calculates the equation of the line given the slope and a point
/*
int main()
{
	float slope, x1, y1;

	printf("\nEnter the slope of your line: ");
	scanf_s("%f", &slope);
	printf("\nEnter a point on the line: ");
	printf("\n\nx1: ");
	scanf_s("%f", &x1);
	printf("\ny1: ");
	scanf_s("%f", &y1);

	printf("The equation of your line is: y = %.3f * (x - %.3f) + %.3f\n\n", slope, x1, y1);

	system("PAUSE");

}
*/

/*
//separates the integer and fractional parts of a floating point number, its a little fucky though and doesnt work with big numbers for some reason
int main()
{
	float x, xfrac;
	int xint;

	printf("Enter a floating point number: ");
	scanf_s("%f", &x);

	xint = (int)x;
	xfrac = x - xint;

	printf("\nThe integer part: %d\n", xint);
	printf("The fractional part: %f\n\n\n\n", xfrac);

	system("PAUSE");
}
*/

/*
//returns the ASCII code of any key on the keyboard
int main()
{
	char a;
	int n;

	printf("Push any key on the keyboard: ");
	scanf_s("%c", &a);

	n = (int)a;

	printf("The ASCII code of %c is: %d\n\n\n", a, n);

	system("PAUSE");
}
*/

/*
int main()
{
	int p;
	float q;

	p = 10;
	p/=10;
	q = p * PI;

	printf("\n%f", q);
	printf("\n%d\n\n\n\n", p);

	system("PAUSE");
}
*/

/*
//example of how to print a memory table out to the screen
int main()
{
	int m = 80;
	printf("\nAddress---Contents---Variable\n");
	printf("\n%p     %d         m\n\n", &m, m);

	system("PAUSE");
}
*/

//another program for looking at ASCII stuff and memory tables
/*
int main()
{
	char c;
	unsigned char v;
	int x, y;

	//c = '>';
	//v = '>';
	//x = (int)c;
	//y = (int)v;
	x = -255;
	y = -255;


	printf("\nAddress    Contents    Variable\n");
	printf("%p       %d           c \n", &x, x);
	printf("%p       %d           v \n\n\n\n", &y, y);

	system("PAUSE");

}
*/

//dont work
/*
int main()
{
	int x;

	FILE *fp;
	fp = fopen_s("myFile.txt", "w");
	printf("Please enter x: ");
	scanf_s("\n%d", &x);
	fprintf(fp, "Please enter x: %d", x);
	fclose(fp);
	return(0);

}
*/

//binary to decimal converter, to do more bits, just copy and paste a couple times and itll work out
/*
int main()
{
	int a, b, c, d, result;

	printf("Enter a 4 digit binary number, the first bit you input is the MSB");
	printf("\nEnter a binary bit: ");
	scanf_s("%d", &a);
	printf("\nEnter a binary bit: ");
	scanf_s("%d", &b);
	printf("\nEnter a binary bit: ");
	scanf_s("%d", &c);
	printf("\nEnter a binary bit: ");
	scanf_s("%d", &d);

	a = a * 2 * 2 * 2;
	b = b * 2 * 2;
	c = c * 2;
	d = d;

	result = a + b + c + d;

	printf("\nThe decimal equivalent to your binary number is: %d\n\n\n", result);

	system("PAUSE");
}
*/

/*
//volume of a semicircular cylinder
int main()
{
	float r, h, v;

	printf("Enter the radius: ");
	scanf_s("%f", &r);
	printf("Enter the height: ");
	scanf_s("%f", &h);

	v = (PI * (r  *r) * h) / 2;

	printf("The volume of your semi-circular cylinder is: %f\n\n", v);

	system("PAUSE");
}
*/