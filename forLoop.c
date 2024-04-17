#include <stdio.h>

int main()
{
    int x = 1, pow = 0;

    while (x * 2 < 1000)
    {
        x = x * 2;
        pow++;
    }
    printf("The result is : %d and %d power of the 2 \n", x, pow);
    return 0;
}