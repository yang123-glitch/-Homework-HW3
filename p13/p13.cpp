#include <stdio.h>
#include <math.h> 

double power(double x, int n);
int main()
{
	double x;
	int n;
	scanf_s("%lf", &x);
	scanf_s("%d", &n);
	printf("%f", power(x, n));
}
double power(double x, int n) 
{
	return pow(x, n);
}