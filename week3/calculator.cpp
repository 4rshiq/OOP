// Calculator with Conditional Operator 
#include<iostream>
using namespace std;
int main ()
{
    double a,b,sol;
    char option;
    cout<<"enter expression : ";
    cin >>a >> option >> b;
    
    if ((option == '/' || option == '%')  && b == 0)
    {
       cout<<"division by zero not defined";
       return 0;
    }
    option == '+' ? cout << "solution: " << a + b << "\n" :
    option == '-' ? cout << "solution: " << a - b << "\n" :
    option == '*' ? cout << "solution: " << a * b << "\n" :
    option == '/' ? cout << "solution: " << a / b << "\n" :
    option == '%' ? cout << "solution: " << (int)a % (int)b << "\n" :
        cout << "invalid operator\nHINT : use +,-,*,/,%";
    return 0;
}