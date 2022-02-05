#include <stdio.h>

// traversal
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// insertion
int insertion(int arr[], int size, int element, int index, int capacity)
{
    if (index >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
    return 1;
}
int main()
{
    int arr[100] = {1, 7, 5, 52, 47, 24};
    int size = 6, element = 30, index = 3, capacity = 100;
    printf("\n\n          ----------TRAVERSAL----------\n\n");
    traversal(arr, size);
    insertion(arr, size, element, index, capacity);
    size += 1;
    printf("\n\n          ----------INSERTION----------\n\n");
    printf("ARRAY WITH INSERTED ELEMENT: %d\n", element);
    traversal(arr, size);
    return 0;
}