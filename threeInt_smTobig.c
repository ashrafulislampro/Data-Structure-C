#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three separated numbers \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
        {
            if (b < c)
                printf("The smallest number sequence is1 %d %d %d \n", a, b, c);
            else
                printf("The smallest number sequence is2 %d %d %d \n", a, c, b);
        }
        else
        {
            printf("The smallest number sequence is3 %d %d %d \n", c, a, b);
        }
    }
    else
    {
        if (a < c)
        {
            printf("The smallest number sequence is5 %d %d %d \n", b, a, c);
        }
        else
        {
            printf("The smallest number sequence is6 %d %d %d \n", c, b, a);
        }
    }
}