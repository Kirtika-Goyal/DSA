#include <iostream>
using namespace std;

int main()
{
    float bal;
    int w;
    cout << "Enter balance\n";
    cin >> bal;
    cout << "Enter withdrawal amount\n";
    cin >> w;
    if ((bal >= w + 0.50) && (w % 5 == 0))
    {
        float k = bal - w - 0.50;
        cout << k << endl;
    }
    else if (bal < w + 0.50)
    {
        cout << "Insufficient funds\n";
    }
    else
    {
        cout << bal << endl;
    }

    return 0;
}