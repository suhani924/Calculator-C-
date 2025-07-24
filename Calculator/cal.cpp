
// Calculator

#include <iostream>
using namespace std;


int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? a / b : 0; }
int mod(int a, int b) { return (b != 0) ? a % b : 0; }

int main() {
    int choice;
    int num1, num2;

    do {

        cout << "\nPress 1 for +\n";
        cout << "Press 2 for -\n";
        cout << "Press 3 for *\n";
        cout << "Press 4 for /\n";
        cout << "Press 5 for %\n";
        cout << "Press 0 for the exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the calculator.\n";
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero is not allowed.\n";
                break;
            case 5:
                if (num2 != 0)
                    cout << "Modulus of " << num1 << " and " << num2 << " is " << mod(num1, num2) << endl;
                else
                    cout << "Error: Modulus by zero is not allowed.\n";
                break;
            default:
                cout << "Please try again.\n";
        }

    } while (true);

    return 0;
}