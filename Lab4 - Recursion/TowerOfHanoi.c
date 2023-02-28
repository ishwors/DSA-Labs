#include <stdio.h>

void toh(int n, char s, char t, char d)
{
    if (n > 0)
    {
        toh(n - 1, s, d, t);
        printf("Move disk %d from %c to %c.\n", n, s, d);
        toh(n - 1, t, s, d);
    }
}

void main()
{
    int n;
    printf("Enter the number of disk on SOURCE Tower: \n");
    scanf("%d", &n);
    printf("\n--- Soluting of Hanoi Tower with %d disks ---\n\n", n);
    toh(n, 'S', 'T', 'D');
}