#include <stdio.h>

int main()
{
    int i, multipleSeries;

    multipleSeries = 0;

    for (i = 1; i <= 10; i++)
    {
        multipleSeries = i * 5;
        printf("5 * %d = %d\n ", i, multipleSeries);
    }
    return 0;
}