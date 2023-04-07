#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    // write the function code here
    string result;
    for (int i = 0; i < text.length(); i++)
    {
        if (i != 0 && text[i] >= 'A' && text[i] <= 'Z')
        {
            result += ' ';
        }
        result += text[i];
    }
    return result;
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}