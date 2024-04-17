#include <stdio.h>

int main()
{
    int i, sum = 0, n;

    printf("Enter the Integer Number n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    printf("The summation is : %d\n", sum);
    return 0;
}