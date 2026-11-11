#include <iostream>

long factorial(long number);
int main()
{
    for (int i = 0; i <= 10; i++) 
    {
        printf("%2d! = %1d\n", i, factorial(i));
    }
}
long factorial(long number) 
{
    if (number > 1)
        return number * factorial(number - 1);
    else
        return 1;
}
