#include <stdio.h>

int main(void)
{
    unsigned int a, b, mask, selectedBits;
    int position, n;
    int width = (int)(sizeof(unsigned int) * 8);

    printf("Enter the first number: ");
    scanf("%u", &a);

    printf("Enter the second number: ");
    scanf("%u", &b);

    printf("Enter starting position: ");
    scanf("%d", &position);

    printf("Enter number of bits to replace: ");
    scanf("%d", &n);

    if (position < 0 || n <= 0 ||
        position >= width || n > width - position)
    {
        printf("Invalid bit range.\n");
        return 1;
    }

    if (n == width)
        mask = ~0U;
    else
        mask = (1U << n) - 1U;

    // Keep the n bits from b.
    selectedBits = (b >> position) & mask;

    // Clear the selected range in a.
    a = a & ~(mask << position);

    // Insert the selected bits.
    a = a | (selectedBits << position);

    printf("Result = %u\n", a);
    return 0;
}