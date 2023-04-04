#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    unordered_set<char> s;
    s.insert(a);
    s.insert(b);
    if(s.size() == 1) return true;
    else return false;
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