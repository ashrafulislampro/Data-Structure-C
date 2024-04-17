#include <stdio.h>

int main()
{
    char ch;

    printf("Enter An Alphabate Letter : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%c is a vowel letter.\n", ch);
    }
    else
    {
        printf("%c is a consonant letter.\n", ch);
    }
    return 0;
}