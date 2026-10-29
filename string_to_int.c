#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;
    int sign = 1;
    long long result = 0;

    printf("Enter an integer as a string: ");
    scanf("%99s", str);

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;

        i++;
    }

    if (str[i] == '\0')
    {
        printf("Invalid input.\n");
        return 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            printf("Invalid input.\n");
            return 1;
        }

        result = result * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer = %lld\n", sign * result);
    return 0;
}