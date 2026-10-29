#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int left = 0, right;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    right = (int)strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}