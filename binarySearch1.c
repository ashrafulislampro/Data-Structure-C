#include <stdio.h>

int binary_search(int arr[], int n, int x)
{
    int left, right, mid;

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[101], i, n, x, count = 0;
    n = 100;
    printf("Enter a number between 0 and 100 : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        count = count + 1;
        arr[i] = count;
    };

    int result = binary_search(arr, n, x);

    if (result != -1)
    {
        printf("Expected %d is found at index %d\n", arr[result], result);
    }
    else
    {
        printf("Expected %d is not found at index %d\n", x, result);
    }

    return 0;
}