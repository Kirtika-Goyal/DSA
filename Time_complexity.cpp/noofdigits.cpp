#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no.";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        //    int  reverse=reverse*10+lastdigit;
        n = n / 10;
        count++;
    }
    cout << count;
    return 0;
}