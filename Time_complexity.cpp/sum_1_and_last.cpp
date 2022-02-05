#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number\n";
    cin >> num;
    int lastdigit, firstdigit, digit;
    for (int i = 0; i < 1; i++)
    {
        lastdigit = num % 10;
    }
    while (num > 0)
    {
        digit = num % 10;
        int res = res * 10 + digit;
        num = num / 10;
    }
    for (int i = 0; i < 1; i++)
    {
        firstdigit = digit % 10;
    }
    cout << "First digit is : " << firstdigit << endl;
    cout << "Last digit is : " << lastdigit << endl;
    cout << "Sum of first and last digit is : " << firstdigit + lastdigit << endl;
    return 0;
}