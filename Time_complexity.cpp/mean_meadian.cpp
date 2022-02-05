#include <iostream>
using namespace std;

int main()
{
    int n, arr[n], sum = 0;
    cout << "How many numbers you want to enter:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Mean of entered numbers is : " << (sum / n) << endl;
    return 0;
}