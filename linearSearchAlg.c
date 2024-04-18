#include <stdio.h>

int linear_search(int arr[], int x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    i = -1;
    return i;
};

int main()
{
    int n, x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    n = 10;
    printf("Enter a random number 1 to 10\n");
    scanf("%d", &x);
    int result = linear_search(arr, x, n);
    if (result != -1)
    {
        printf("Expected number is found at index = %d is = %d\n", result, arr[result]);
    }
    else
    {
        printf("Expected number is not found = %d\n", x);
    }
    return 0;
}