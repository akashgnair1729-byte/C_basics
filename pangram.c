#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[500];
    int found[26] = {0};
    int i, count = 0;
    int ch;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (!found[ch - 'a'])
            {
                found[ch - 'a'] = 1;
                count++;
            }
        }
    }

    if (count == 26)
        printf("Pangram\n");
    else
        printf("Not a pangram\n");

    return 0;
}