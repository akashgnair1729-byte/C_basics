#include <stdio.h>

int main(void)
{
    int arr[100], temp[100];
    int n, i, k = 0;

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

    // Copy negative values first.
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            temp[k++] = arr[i];
    }

    // Then copy zero and positive values.
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            temp[k++] = arr[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    printf("\n");
    return 0;
}