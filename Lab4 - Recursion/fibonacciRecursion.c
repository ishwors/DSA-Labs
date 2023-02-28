#include <stdio.h>

void fib(int n)
{
    int fib1 = 0, fib2 = 1;
    int nextTerm = fib1 + fib2;

    printf("%d, %d, ", fib1, fib2);
    for (int i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);
        fib1 = fib2;
        fib2 = nextTerm;
        nextTerm = fib1 + fib2;
    }
}

void fibo(int n)
{

    int fib1 = 0, fib2 = 1;
    int nextTerm = 0;
    printf("Fibonacci Series:");
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            nextTerm = i;
        }
        else
        {
            nextTerm = fib1 + fib2;
            fib1 = fib2;
            fib2 = nextTerm;
        }
        printf(" %d", nextTerm);
    }
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int n, m = 0;
    printf("Enter number of Fibonacci Terms:\n");
    scanf("%d", &n);
    printf("Your fibonacci series with %d terms:\n", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", fibonacci(m));
        m++;
    }

    // fib(n);
    // fibo(n);

    return 0;
}