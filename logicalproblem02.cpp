#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    // write the function here
   
    int ascii1=a-'a';
    int ascii2=b-'b';
    if((ascii1^ascii2 )== 0){
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    char a;
    char b;
    cout << "Enter the characters :";
    cin >> a >> b;
    if (check(a, b))
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }
    return 0;
}