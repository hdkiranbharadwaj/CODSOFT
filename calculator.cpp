#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Prompt the user to choose an operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    return 0;
}
