#include <iostream>
#include <iomanip> // for setprecision()
#include <limits> // for numeric_limits

using namespace std;

int add(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}int multiply(int x, int y){
    return x*y;
}int divide(int x, int y){
    return x/y;
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
