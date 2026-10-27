#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is a vowel", ch);
        else
            printf("%c is a consonant", ch);
    }
    else
        printf("It's not a letter");

    return 0;
}