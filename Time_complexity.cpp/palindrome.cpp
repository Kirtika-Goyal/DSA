#include <iostream>
using namespace std;

int main() 
{
    int n,digit,num;
    int reverse =0;
    cout<<"Enter a digit:";
    cin>>n;
    num = n;
    do
    {
        digit = n%10;
         reverse = reverse*10+digit;
        n = n /10;
    } while (n!=0);
    if (num==reverse)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    
    return 0;
}


