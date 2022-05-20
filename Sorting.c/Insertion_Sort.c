#include <stdio.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionsort(int *arr, int size)
{
    int key, j;
    for (int i = 0; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {52, 15, 73, 28, 91, 48};
    int size = sizeof(arr) / sizeof(int);
    printf("Size of array is %d\n", size);
    printarray(arr, size);
    printf("After insertion sort :\n");
    insertionsort(arr, size);
    printarray(arr, size);
    return 0;
}