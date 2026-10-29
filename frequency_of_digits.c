#include <stdio.h>

void countDigits(int n, int freq[])
{
    int digit;

    if (n == 0)
    {
        freq[0]++;
        return;
    }

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }
}

int main()
{
    int n;
    int freq[10] = {0};
    int i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    countDigits(n, freq);

    for (i = 0; i < 10; i++)
    {
        printf("%d : %d\n", i, freq[i]);
    }

    return 0;
}