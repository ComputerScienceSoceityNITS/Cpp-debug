#include <iostream>
#include <string>

using namespace std;

int count_vowels(string str) { //function to count vowels
    int count = 0;//initialsing count
    for (int i = 0; i < str.length(); i++) { //loop to iterate all the characters of the string 
        char c = tolower(str[i]);//to convert all the uppercase to lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {//for checking the vowels 
            count++;//incrementing the count ,if the char is a vowel
        }
    }
    return count;//return the count of vowels
}

int main() {

    string input; //declaring a 'input' string
    cout << "Enter a string: ";
    cin>>input; //takes a string as a input
    cout << "The number of vowels in the string is: " << count_vowels(input) << endl;//cout statement for printing out the no. of vowels which we get by calling the function count_vowels
    return 0;
}
