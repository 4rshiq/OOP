// Calculator with Conditional Operator 
#include<iostream>
using namespace std;
int main ()
{
    double a,b,sol;
    char option;
    cout<<"enter expression : ";
    cin >>a >> option >> b;
    
    if (option == '/' && b == 0)
    {
       cout<<"division by zero not defined";
       return 0;
    }
    
    switch (option)
    {
    case '+':
        cout<<"solution: "<<a+b<<"\n";
        break;
    case '-':
        cout<<"solution: "<<a-b<<"\n";
        break;
    case '*':
        cout<<"solution: "<<a*b<<"\n";
        break;
    case '/':
        cout<<"solution: "<<a/b<<"\n";
        break;
    case '%':
        cout<<"solution: "<< (int)a % (int)b<<"\n";
        break;
    
    default:
    cout<<"invalid operator\n HINT : use +,-,*,/";
        break;
    }
    
    
}