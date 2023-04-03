#include <iostream>
#include <string>

using namespace std;

int count_vowels(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "The number of vowels in the string is: " << count_vowels(input) << endl;
    return 0;
}
