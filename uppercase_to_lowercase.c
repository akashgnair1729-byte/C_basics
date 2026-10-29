#include <stdio.h>

int main(void)
{
    char str[500];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
    }

    printf("Lowercase string: %s", str);
    return 0;
}