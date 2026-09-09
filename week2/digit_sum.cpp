//7. Sum of Digits
#include<iostream>
using namespace std;
int main()
{
    int a,remainder,sum=0;
    cout<<"enter the number you want to reverse: ";
    cin>>a;
    while (a!=0)
    {
        remainder = a%10;
        sum += remainder;
        a/=10;
    }
    cout<<"the sum of the digits is "<<sum;
}