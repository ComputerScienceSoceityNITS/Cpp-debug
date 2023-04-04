#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
    for(long long i = 1;i<text.size();i++)
    {
        string blank = " ";
        if((text[i] <=90 && text[i-1] >=97) ){
        text.insert(i,blank);
    }
    }
    return text;
}


int main()
{
    string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
    cout << "Original String:\n";
    cout << text;
    cout << "Modified string :\n";
    cout << insert_space(text) << endl;
}