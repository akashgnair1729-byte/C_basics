#include <stdio.h>

int main(void)
{
    unsigned int num, mask;
    int position, n;
    int width = (int)(sizeof(unsigned int) * 8);

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    printf("Enter starting position: ");
    scanf("%d", &position);

    printf("Enter number of bits to toggle: ");
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
        mask = ((1U << n) - 1U) << position;

    num = num ^ mask;

    

    printf("Result = %u\n", num);
    return 0;
}