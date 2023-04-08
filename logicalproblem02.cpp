#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    // write the function here
    if((a^b) != 0){
        return true;//if xor operator is 0 then both characters are equal otherwise unequal 
    }else return false;
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