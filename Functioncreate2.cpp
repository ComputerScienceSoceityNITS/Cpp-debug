#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    string res;
    res=text[0];
    for(int i=1;text[i]!='\0';i++){
        if((text[i]>='A'&&text[i]<='Z')&&(text[i-1]>='a'&&text[i-1]<='z')){
            res+=" ";
        }
        res+=text[i];
    }
    return res;
}

int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}