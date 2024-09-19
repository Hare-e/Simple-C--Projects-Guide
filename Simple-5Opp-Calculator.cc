#include <iostream>
using namespace std;


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0.0;
    }
}


double modulo(double a, double b) {
    if (b != 0) {
        return (a, b);
    } else {
        cout << "Error: Modulo by zero is not allowed." << endl;
        return 0.0;
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "5 Operation Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result = 0.0;
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '%':
            result = modulo(num1, num2);
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

