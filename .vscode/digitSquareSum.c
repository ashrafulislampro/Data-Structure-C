#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter nth integer \n");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     sum += i * i;
    // }

    sum = (n * (n + 1) * (2 * n + 1)) / 6;

    printf("The integer square summation = %d \n", sum);

    return 0;
}