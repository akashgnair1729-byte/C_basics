#include <stdio.h>

int main(void)
{
    long long num, temp;
    int base, remainder;
    char result[100];
    int i = 0;

    printf("Enter a non-negative decimal number: ");
    scanf("%lld", &num);

    printf("Enter base (2 to 16): ");
    scanf("%d", &base);

    if (num < 0 || base < 2 || base > 16)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0)
    {
        printf("Result: 0\n");
        return 0;
    }

    temp = num;

    // Repeatedly divide by the base.
    while (temp > 0)
    {
        remainder = temp % base;

        if (remainder < 10)
            result[i] = remainder + '0';
        else
            result[i] = remainder - 10 + 'A';

        i++;
        temp = temp / base;
    }

    printf("Result: ");

    // Remainders are stored in reverse order.
    while (i > 0)
    {
        printf("%c", result[--i]);
    }

    printf("\n");
    return 0;
}