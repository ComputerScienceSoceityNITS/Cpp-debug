#include <iostream>
#include <string>

using namespace std;

int count_vowels(string str) {

    int count = 0;
    for (int i = 0; str[i]!='\0' || (str[i]==' ' && str[i+1]=='\0'); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    fgets(input,100,stdin);  

    int counter = 0;
    for (int i = 0; input[i]; i++){     
        if (input[i] != ' ')
            input[counter++] = input[i]; 
    }
    input[counter] = '\0';       

    cout << "The number of vowels in the string is: " << count_vowels(input) << endl;
    return 0;
}
