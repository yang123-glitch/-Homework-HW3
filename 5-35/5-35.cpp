#include <stdio.h>

unsigned long long int Fibonacci(unsigned int);

int main()
{
    unsigned int n;
    scanf_s("%u", &n);
    printf("%llu", Fibonacci(n));
}
unsigned long long int Fibonacci(unsigned int n) 
{
    unsigned long long int a = 0, b = 1, next = 0;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            next = a + b;
            a = b;
            b = next;
            /* 用跳格子的方式，每次把a和b都往後一格相加*/
        }
        return next;
    }
}
                     