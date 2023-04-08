#include <iostream>
#include <iomanip> // for setprecision()
#include <limits> // for numeric_limits

using namespace std;

// Add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Divide two numbers
float divide(float num1, float num2) {
    return num1 / num2;
}

int main() {
    // Declare variables
    float num1, num2, result;
    char op;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation
    switch(op) {
        case '+':
            result = add(num1,num2);
            break;
        case '-':
            result = subtract(num1,num2);
            break;
        case '*':
            result = multiply(num1,num2);
            break;
        case '/':
            if (num2 == 0) {
                cerr << "Error: division by zero\n";
                return 1;
            }
            result = divide(num1,num2);
            break;
        default:
            cerr << "Error: invalid operator\n";
            return 1;
    }

    // Display result
    cout << setprecision(numeric_limits<double>::max_digits10) // Show all significant digits
         << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
