#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: 
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
