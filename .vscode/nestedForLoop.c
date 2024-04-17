#include <stdio.h>

int main()
{
    int n, sum, i, j;

    printf("Enter the integer Number : ");
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("%d is the summation of the integer \n", sum);
    return 0;
}