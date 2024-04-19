#include <stdio.h>

int main()
{
    int arr[] = {11, 13, 24, 25, 26, 27, 28, 35, 40, 45};
    int i, n = 10, mid, left, right, x = 40;

    left = 0;
    right = n - 1;

    while (left <= right)
    {

        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            printf("Index = %d and Number = %d\n", mid, arr[mid]);
            break;
        }
        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
    }

    if (left > right)
    {
        printf("Index = %d and %d Number is not found amoung the arr\n", -1, x);
    }
    return 0;
}