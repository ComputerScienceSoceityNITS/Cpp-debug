#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if(num <= 3){
        return true;
    }
    if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= num; i+= 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if (is_prime(input)) {
        cout << input << " is a prime number." << endl;
    } else {
        cout << input << " is not a prime number." << endl;
    }
    return 0;
}
