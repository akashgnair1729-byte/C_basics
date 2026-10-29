#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, i, j, k;

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

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; )
        {
            if (arr[i] == arr[j])
            {
                // Shift remaining elements left.
                for (k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];

                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array without duplicates: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}