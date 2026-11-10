#include <stdio.h>

int main()
{
	int a, b, min, GCD = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	//if (a > b) 
	min = (a > b) ? b : a;
	for (int i = 1; i <= min; i++) 
	{
			if ((a % i == 0) && (b % i == 0))
				GCD = i;
	}
	printf("%d", ((a * b) / GCD));
	/*
	else
	{
		int GCD = 0;
		for (int i = 1; i <= a; i++)
		{
			if ((a % i == 0) && (b % i == 0))
				GCD = i;
		}
		printf("%d",((a * b) / GCD));
	}
	*/
}

