#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    if(a==b){
        return true;
    }
    return false;
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