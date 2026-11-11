#include <stdio.h>

int square(int);
int main()
{
	int y;
	scanf_s("%d", &y);
	printf("%d", square(y));
}
int square(int y) 
{
	return y * y;
}

