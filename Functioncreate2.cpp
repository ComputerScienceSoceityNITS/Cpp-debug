#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    // write the function code here
    string s="";
    s.push_back(text[0]);
    for(int i=1;i<text.length();i++){
        if(text[i]>='A' && text[i]<='Z'){
            s.push_back(' ');
            s.push_back(text[i]);
        }
        else {
            s.push_back(text[i]);
        }
    }
    return s;
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout<<endl;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}