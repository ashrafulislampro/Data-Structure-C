#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers separated \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a = %d is the biggest number \n", a);
    }
    else if (b > a && b > c)
    {
        printf("b = %d is the biggest number \n", b);
    }
    else
    {
        printf("c = %d is the biggest number \n", c);
    }

    return 0;
}