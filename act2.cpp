
#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    char op;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    cout << "\nSelect an arithmetic operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << n1 + n2;
            break;

        case '-':
            cout << "Result: " << n1 - n2;
            break;

        case '*':
            cout << "Result: " << n1 * n2;
            break;

        case '/':
            if (n2 != 0) {
                cout << "Result: " << n1 / n2;
            }
            else {
                cout << "Error: Cannot divide by zero.";
            }
            break;

        default:
            cout << "Invalid arithmetic operator.";
    }

    return 0;
}
