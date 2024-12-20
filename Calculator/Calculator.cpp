
#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        double num1, num2, result;
        char operation;

        // Input from the user
        cout<<"A Simple Calculator!"<<endl;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform the calculation using a switch-case statement
        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed!" << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator!, Please use +, -, /, * " << endl;
        }

        // Inquire whether the user would like to do another calculation.
        cout << "Would you like to perform another calculation? (Y/N): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
