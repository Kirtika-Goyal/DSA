#include <stdio.h>

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int *arr1, int *arr2, int *arr3, int size1, int size2, int size3)
{
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr1[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int size1 = sizeof(arr1) / sizeof(int);
    printf("\nSize of array1 is %d\n", size1);
    printarray(arr1, size1);

    int arr2[] = {6, 12, 18, 24, 30};
    int size2 = sizeof(arr2) / sizeof(int);
    printf("\nSize of array2 is %d\n", size2);
    printarray(arr2, size2);

    int size3 = size1 + size2;
    int arr3[size3];
    printf("\nAfter merge sort : \n");
    printf("Size of array3 is %d\n", size3);
    merge(arr1, arr2, arr3, size1, size2, size3);
    printarray(arr3, size3);
    
    return 0;
}