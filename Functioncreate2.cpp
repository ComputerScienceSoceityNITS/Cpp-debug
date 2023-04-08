#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    // write the function code here
    if(text.length() <= 1){
        return text;//it is the base case where all the recursive function depends
    }else{
        string firstchar =  text.substr(0,1);
        // here text.substr function in cpp extract a substring from the text string
        //starting from the first character ie positon 0 and extracting 1 character.
        string remaingchar = text.substr(1);
        return firstchar + " " + insert_space(remaingchar);
    }
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}