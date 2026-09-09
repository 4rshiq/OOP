//6. Reverse a Number
#include<iostream>
using namespace std;
int main()
{
    int a,remainder,rev=0;
    cout<<"enter the number you want to reverse: ";
    cin>>a;
    while (a!=0)
    {
        remainder = a%10;
        rev += remainder;
        rev*= 10;
        a/=10;
    }
    cout<<rev/10;
}