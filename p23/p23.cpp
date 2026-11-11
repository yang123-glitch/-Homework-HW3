#include <stdio.h>
#include<time.h>
#include<stdlib.h>
enum Status {CONTINUE, WON, LOST};
int rollDice(void);

int main() 
{
	enum Status gameStatus;
	
	srand(time(NULL));
	
	int myPoint, sum;
	sum = rollDice();
	
	switch (sum) 
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			break;
	}
	while (gameStatus == CONTINUE) 
	{
		sum = rollDice();
		if (sum == myPoint)
			gameStatus = WON;
		else
			if (sum == 7)
				gameStatus = LOST;
	}

	if (gameStatus == WON)
		printf("Won\n");
	else
		printf("Lose\n");
}
int rollDice(void) 
{
	int a, b, sum;
	a = 1 + (rand() % 6);
	b = 1 + (rand() % 6);
	sum = a + b;
	printf("%d + %d  = %d ", a, b, sum);
	return sum;
}
