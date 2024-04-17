#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers separated : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        if (b < c)
            printf("a = %d b = %d c = %d lowest sequence \n", a, b, c);
        else
            printf("a = %d c = %d b = %d lowest sequence \n", a, c, b);
    }
    else if (b < a && b < c)
    {
        if (a < c)
            printf("b = %d a = %d c = %d lowest sequence \n", b, a, c);
        else
            printf("b = %d c = %d a = %d lowest sequence \n", b, c, a);
    }
    else
    {
        if (a < b)
            printf("c = %d a = %d b = %d lowest sequence \n", c, a, b);
        else
            printf("c = %d b = %d a = %d lowest sequence \n", c, b, a);
    }
    return 0;
}