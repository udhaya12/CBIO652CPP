#include <iostream>
using namespace std;
int main() {
    int op;
    float num1, num2;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide" << endl;
    cout << "Select an operator by entering its associated number: ";
    cin >> op;
    cout << "Enter two numbers: " << endl;
    switch (op) {
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
              cout << "Operation does not exist";
            break;
    }
}
