#include <stdio.h>
int power(int base, int exponent);
int main()
{
    int base, exponent;
    scanf_s("%d", &base);
    scanf_s("%d", &exponent);
    printf("%d", power(base, exponent));
}
int power(int base, int exponent) 
{
    int sum = 0;
    if (exponent > 1)
        return base * power(base, exponent - 1);
    else
        return base;
}
