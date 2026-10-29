#include <stdio.h>

int main(void)
{
    long long num;
    unsigned long long value;
    char str[30];
    int i = 0, j;
    char temp;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle the most negative integer safely.
    if (num < 0)
        value = 0ULL - (unsigned long long)num;
    else
        value = (unsigned long long)num;

    // Extract digits in reverse order.
    do
    {
        str[i++] = (value % 10) + '0';
        value /= 10;
    } while (value > 0);

    if (num < 0)
        str[i++] = '-';

    str[i] = '\0';

    // Reverse the characters.
    for (j = 0; j < i / 2; j++)
    {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("String = %s\n", str);
    return 0;
}