#include <stdio.h>

int triangle_area(int h, int w)
{
    return 0.5 * h * w;
}

int main()
{
    int result = triangle_area(3, 4);
    printf("Triangle Area is = %d\n", result);
    result = triangle_area(5, 4);
    printf("Triangle Area is = %d\n", result);
    return 0;
}