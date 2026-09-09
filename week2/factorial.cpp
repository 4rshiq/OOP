//2.Factorial of a Number
#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout<<"enter the number of your choice\n";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        fact*=i;
    }
     cout<<"the factorial of" << a << " is " <<fact;
    return 0;
}
