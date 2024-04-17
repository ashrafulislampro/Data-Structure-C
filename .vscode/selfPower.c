#include <stdio.h>
#include <math.h>

unsigned long long calculateSum(int n)
{
    unsigned long long totalSum = 0;
    for (int i = 1; i <= n; i++)
    {
        unsigned long long term = pow(i, i);
        totalSum += term;
    }
    return totalSum;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    unsigned long long result = calculateSum(n);
    printf("The sum is: %llu\n", result);

    return 0;
}
