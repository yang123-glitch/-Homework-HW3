#include <stdio.h>
int maxNumber(int, int, int);
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", maxNumber(a, b, c));
}
int maxNumber(int num1, int num2, int num3) 
{
	int max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

