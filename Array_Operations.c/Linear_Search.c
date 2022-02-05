#include <stdio.h>

int linearsearching(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("Element found in array.\n");
            return 1;
        }
    }
    printf("Element not found");
    return -1;
}
int main()
{
    int arr[] = {1, 26, 4, 84, 3, 76, 63, 73, 37};
    printf("Given array is:\n");
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    linearsearching(arr, size, element);
    return 0;
}