#include <stdio.h>

int main(void)
{
    int arr[100], n, i;
    int smallest = 0, secondSmallest = 0;
    int largest = 0, secondLargest = 0;
    int hasSmallest = 0, hasSecondSmallest = 0;
    int hasLargest = 0, hasSecondLargest = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Enter between 2 and 100 elements.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        int x = arr[i];

        if (!hasSmallest || x < smallest)
        {
            if (!hasSmallest || x != smallest)
            {
                if (hasSmallest)
                {
                    secondSmallest = smallest;
                    hasSecondSmallest = 1;
                }

                smallest = x;
                hasSmallest = 1;
            }
        }
        else if (x > smallest &&
                 (!hasSecondSmallest || x < secondSmallest))
        {
            secondSmallest = x;
            hasSecondSmallest = 1;
        }

        if (!hasLargest || x > largest)
        {
            if (!hasLargest || x != largest)
            {
                if (hasLargest)
                {
                    secondLargest = largest;
                    hasSecondLargest = 1;
                }

                largest = x;
                hasLargest = 1;
            }
        }
        else if (x < largest &&
                 (!hasSecondLargest || x > secondLargest))
        {
            secondLargest = x;
            hasSecondLargest = 1;
        }
    }

    if (hasSecondSmallest)
        printf("Second smallest distinct value = %d\n",
               secondSmallest);
    else
        printf("No second smallest distinct value.\n");

    if (hasSecondLargest)
        printf("Second largest distinct value = %d\n",
               secondLargest);
    else
        printf("No second largest distinct value.\n");

    return 0;
}