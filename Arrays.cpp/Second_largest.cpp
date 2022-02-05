#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int n, temp;
    cout << "Enter size of an array\n";
    cin >> n;
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Second largest number is " << arr[1] << endl;
    return 0;
}