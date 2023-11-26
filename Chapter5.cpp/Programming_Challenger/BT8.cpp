#include <iostream>
using namespace std;

int main() {
    char choice;
    double num1, num2, result;

    do {
        cout << "Math Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '2':
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '3':
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '4':
                cout << "Enter two numbers to divide: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero!\n";
                }
                break;
            case '5':
                cout << "Quitting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-5).\n";
                break;
        }
    } while (choice != '5');

    return 0;
}
