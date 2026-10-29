#include <stdio.h>

int main(void)
{
    int arr[100], temp[100];
    int n, positions, i;
    char direction;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &positions);

    printf("Enter L for left or R for right: ");
    scanf(" %c", &direction);

    if (positions < 0 ||
        (direction != 'L' && direction != 'l' &&
         direction != 'R' && direction != 'r'))
    {
        printf("Invalid input.\n");
        return 1;
    }

    positions %= n;

    for (i = 0; i < n; i++)
    {
        int destination;

        if (direction == 'L' || direction == 'l')
            destination = (i - positions + n) % n;
        else
            destination = (i + positions) % n;

        temp[destination] = arr[i];
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    printf("\n");
    return 0;
}