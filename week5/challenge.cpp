#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int reverse = 0;

    while (n != 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return reverse;
}

bool isPalindrome(int n)
{
    return n == reverseNumber(n);
}

bool isArmstrong(int n)
{
    int original = n;
    int digits = countDigits(n);
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return original == sum;
}

int main()
{
    cout << countDigits(1234) << endl;
    cout << reverseNumber(1234) << endl;
    cout << boolalpha << isPalindrome(121) << endl;
    cout << isArmstrong(153) << endl;

    return 0;
}