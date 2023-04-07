#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    // write the function here
    return !(a ^ b);
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