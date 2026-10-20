//lab 1 Q4

#include <iostream>
using namespace std;

void add(double a, double b) {
    cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "The product of " << a << " and " << b << " is " << a * b << endl;
}

void divide(double a, double b) {
    if (b == 0) {
        cout << "Division by zero is not possible." << endl;
    } else {
        cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
    }
}

int main() {
    char choice, again;
    double a, b;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    do {
        cout << "\nWhat operation do you want to perform?\n"
             << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "Enter your choice (1-4): ";

        cin >> choice;

        switch (choice) {
            case '1':
                add(a, b);
                break;

            case '2':
                subtract(a, b);
                break;

            case '3':
                multiply(a, b);
                break;

            case '4':
                divide(a, b);
                break;

            default:
                cout << "Invalid choice." << endl;
        }

        cout << "\nWant to perform another operation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Calculator terminated." << endl;

    return 0;
}
