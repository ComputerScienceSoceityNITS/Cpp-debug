#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    string newstr="";
    newstr+=text[0];
    for(int i=1;i<text.length();i++){
        if((text[i]>='A' && text[i]<='Z') && (text[i-1]>='a' && text[i-1]<='z')){
            newstr+=' '; 
            newstr+=text[i]; 
        }
        else{
            newstr+=text[i];
        }
    }
    return newstr;
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}