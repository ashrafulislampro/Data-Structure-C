#include <stdio.h>

int main()
{
    int a;

    while (scanf("%d", &a) != EOF && a)
    {
        printf("The result is : %d\n", a);
    };
    return 0;
}