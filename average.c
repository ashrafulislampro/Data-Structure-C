#include <stdio.h>

double average(double a, double b)

{

    return (a + b) / 2;
}

int main(void)

{

    double x, y, z;

    printf("Enter three numbers: ");

    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %.2lf and %.2lf = %.2lf\n", x, y,
           average(x, y));

    printf("Average of %.2lf and %.2lf = %.2lf\n", y, z,
           average(y, z));

    printf("Average of %.2lf and %.2lf = %.2lf\n", x, z,
           average(x, z));

    return 0;
}