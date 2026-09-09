//1. Calculator using Switch
#include <iostream>
using namespace std;
int main()
{
    double a, b; 
    int choice;
    cout << "which operation do you want to perform ?\n 1)addition\n 2) subtraction\n 3)multiplication\n 4)divison\n";
    cin >> choice;
    cout << "enter the value of first number:";  //<< is called insertion operator
    cin >> a;                                    //>> extraction operator
    cout << "enter the value of second number:"; //<< is called insertion operator
    cin >> b;                                    //>> extraction operator
    // cin(input) and cout(output) are objects not functions
    switch (choice)
    {
    case 1:
        cout << "the sum of " << a << " and " << b << " is " << a + b;
        break;

    case 2:
        cout << "the difference of " << a << " and " << b << " is " << a - b;
        break;

    case 3:
        cout << "the product of " << a << " and " << b << " is " << a * b;
        break;

    case 4:
        if(b==0)
        {cout<<"division by zero not possible\n";
        break;
        }
        cout << "the quotient of " << a << " and " << b << " is " << a / b;
        break;
    }

    return 0;
}
