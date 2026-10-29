#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 1, c;
    int i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}