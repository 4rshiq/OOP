#include <iostream>
using namespace std;

long long factorial(int n);
long long nCr(int n, int r);

int main()
{
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr = " << nCr(n, r) << endl;

    return 0;
}

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

long long nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;

    return factorial(n) / (factorial(r) * factorial(n - r));
}