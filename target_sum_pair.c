#include <stdio.h>

int main(void)
{
    int arr[100], n, target;
    int i, j, found = 0;

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

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((long long)arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pairs found.\n");

    return 0;
}