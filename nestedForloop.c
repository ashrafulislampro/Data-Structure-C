#include <stdio.h>

int main()
{
    int i, j, count = 0, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            count = count + 1;
        }
    }
    printf("%d , count = %d\n", n, count);
    return 0;
}