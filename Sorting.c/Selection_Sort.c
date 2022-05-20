#include <stdio.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionsort(int *arr, int size)
{
    int temp;
    int index;
    for (int i = 0; i <= size - 1; i++)
    {
        index = i;
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}
int main()
{
    int arr[] = {52, 15, 73, 28, 91, 48};
    int size = sizeof(arr) / sizeof(int);
    printf("Size of array is %d\n", size);
    printarray(arr, size);
    printf("After selection sorting :\n");
    selectionsort(arr, size);
    printarray(arr, size);
    return 0;
}