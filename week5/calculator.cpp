#include <iostream>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n--- Calculator ---" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice)
        {
            case 1:
                cout << "Result = " << add(a, b) << endl;
                break;

            case 2:
                cout << "Result = " << subtract(a, b) << endl;
                break;

            case 3:
                cout << "Result = " << multiply(a, b) << endl;
                break;

            case 4:
                if (b == 0)
                    cout << "Error: Division by zero is not allowed." << endl;
                else
                    cout << "Result = " << divide(a, b) << endl;
                break;

            case 0:
                cout << "Calculator closed." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}


double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}