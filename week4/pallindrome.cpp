/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : B3
*/
#include<iostream>
using namespace std;
int main()
{
    int n,remainder=0,rev=0;
    cout<<"input: ";
    cin>>n;
    int original = n;
    while(n!=0)
    {
        remainder = n%10;
        rev+=remainder;
        rev*=10;
        n/=10;
    }
    rev/=10;
    rev == original ? cout<<"output: pallindrome"  :  cout<<"output: not a pallindrome";
    
}