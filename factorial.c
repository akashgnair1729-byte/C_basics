#include <stdio.h>

int main()
{
    int n;
    int i;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}