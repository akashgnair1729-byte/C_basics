#include <stdio.h>

int main(void)
{
    unsigned int a, b, mask, difference;
    int position, n;
    int width = (int)(sizeof(unsigned int) * 8);

    printf("Enter first number: ");
    scanf("%u", &a);

    printf("Enter second number: ");
    scanf("%u", &b);

    printf("Enter starting bit position: ");
    scanf("%d", &position);

    printf("Enter number of bits to swap: ");
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

    mask <<= position;

    // Find positions where the two numbers differ.
    difference = (a ^ b) & mask;

    // Exchange the selected bits using XOR.
    a ^= difference;
    b ^= difference;

    printf("First number after swap: %u\n", a);
    printf("Second number after swap: %u\n", b);

    return 0;
}