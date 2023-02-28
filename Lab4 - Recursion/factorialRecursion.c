#include <stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for (i = n; i > 0; i--)
    {
        f = f * i;
    }
    return f;
}

int fact(int n)
{
    if (n == 0)
        return 1; // 0!=1

    else
    {
        return n * fact(n - 1);
    }
}

void main()
{
    int n;
    printf("Enter any interger to calculate factorial:\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d./t [Using recurion method]\n\n", n, fact(n));
    printf("Factorial of %d is %d./t [Using iterative method]", n, factorial(n));
}