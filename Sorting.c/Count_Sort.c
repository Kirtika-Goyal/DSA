#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int maximum(int *arr, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void countsort(int *arr, int size)
{
    int i, j;
    int max = maximum(arr, size);

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int arr[] = {52, 15, 73, 28, 91, 48};
    int size = sizeof(arr) / sizeof(int);
    printf("Size of array is %d\n", size);
    printarray(arr, size);
    printf("After count sort :\n");
    countsort(arr, size);
    printarray(arr, size);
    return 0;
}