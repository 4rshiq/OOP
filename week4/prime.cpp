/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : A5
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool prime = true;
    int divisor = 0;

    if (n < 2)
    {
        prime = false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            divisor = i;
            break;
        }
    }

    if (prime)
    {
        cout << n << " is prime." << endl;
    }
    else
    {
        cout << n << " is not prime." << endl;

        if (divisor != 0)
        {
            cout << n << " is divisible by " << divisor << "." << endl;
        }
    }
}