#include <stdio.h>

void selection_sort(int arr[], int n);
int main()
{
    int arr[] = {45, 32, 44, 22, 11, 77, 43, 12, 23, 1};
    int i, n = 10;

    selection_sort(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

void selection_sort(int arr[], int n)
{
    int i, j, temp, index_min;

    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index_min])
            {
                index_min = j;
            }
        }

        if (index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}