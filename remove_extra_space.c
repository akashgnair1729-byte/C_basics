#include <stdio.h>

int main(void)
{
    char str[500];
    int i = 0, j = 0;
    int previousSpace = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (!previousSpace)
                str[j++] = ' ';

            previousSpace = 1;
        }
        else
        {
            str[j++] = str[i];
            previousSpace = 0;
        }

        i++;
    }

    str[j] = '\0';

    printf("Result: %s", str);
    return 0;
}