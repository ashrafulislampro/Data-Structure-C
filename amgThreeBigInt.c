#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Three separated numbers \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("a = %d is greater than between %d and  %d \n", a, b, c);
        else
            printf("C = %d is greater than between %d and %d \n", c, a, b);
    }
    else
    {
        if (b > c)
            printf("b = %d is greater than between %d and  %d \n", b, a, c);
        else
            printf("C = %d is greater than between %d and %d \n", c, b, a);
    }
    return 0;
}