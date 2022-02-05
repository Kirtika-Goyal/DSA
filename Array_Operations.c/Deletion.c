#include <stdio.h>

void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// deletion
int deletion(int arr[], int size, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = index; i <= size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    return 1;
}
int main()
{
    int arr[100] = {1, 7, 5, 52, 47, 24};
    printf("ELEMENT WHICH YOU WANNA DELETE FROM ARRAY: %d\n", arr[3]);
    int size = 6, index = 3, capacity = 100;
    deletion(arr, size, index, capacity);
    size -= 1;
    printf("\n\n          ----------AFTER DELETION----------\n\n");
    traversal(arr, size);
    return 0;
}