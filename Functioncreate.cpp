#include <iostream>
#include <iomanip> // for setprecision()
#include <limits> // for numeric_limits

using namespace std;

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
            result = sub(num1,num2);
            break;
        case '*':
            result = mul(num1,num2);
            break;
        case '/':
            
            result = di(num1,num2);
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
// separate functions for operators
int add(int num1,int num2){

int sum = num1 + num2;
return sum;
}
int sub(int num1,int num2){

int s = num1 - num2;
return s;
}
int mul(int num1,int num2){

int m = num1 * num2;
return m;
}
int di(int num1,int num2){
    if (num2 == 0) {
                cerr << "Error: division by zero\n";
                return 1;
            }

int d = num1/num2;
return d;
}