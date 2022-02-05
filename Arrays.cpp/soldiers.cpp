#include <iostream>
using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0;
    int arr[n];
    cout << "Enter the number of soldiers " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of weapons of soldier " << i + 1 << endl;
        cin >> arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << "Ready for battle bcoz they have even no. of weapons" << endl;
    }
    else
    {
        cout << "Not ready for battle bcoz they have odd no. of weapons" << endl;
    }
    return 0;
}