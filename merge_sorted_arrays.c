#include <stdio.h>

int main(void)
{
    int a[100], b[100], merged[200];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter first array in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &m);

    if (m < 1 || m > 100)
    {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter second array in sorted order:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    i = 0;

    // Select the smaller current element.
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements.
    while (i < n)
        merged[k++] = a[i++];

    while (j < m)
        merged[k++] = b[j++];

    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}