#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return true;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int input;  //declaring a  integer value
    cout << "Enter a number: ";
    cin >> input;//taking int as input value
    if (is_prime(input)) { //condition checking for input as prime or not by passing in a function
        cout << input << " is  not a prime number." << endl;
    }
     else {
        cout << input << " is  a prime number." << endl;
    }
    //cout << input << " is not a prime number." << endl;
    
    return 0;
}
