#include <stdio.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubblesort(int *arr, int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {72, 43, 93, 29, 82, 10};
    int size = sizeof(arr) / sizeof(int);
    printf("Size of array is %d\n", size);
    printarray(arr, size);
    printf("After bubble sorting :\n");
    bubblesort(arr, size);
    printarray(arr, size);
    return 0;
}