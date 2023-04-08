// You are given 2 integers - X,Y. You can do one of the following operations multiple times

//   1.Select any other integer Z and increase X by Z and decrease Y by Z OR
//   2.Select any other integer Z and decrease X by Z and increase Y by Z
// After any number of operations - you have to check if X==Y

// Input Format:
// First line will contain T,number of test cases.Then the test cases follow.Each test case contains of a single line of input, two integers,X, Y.

// Output Format:
//  For each test case, if the equality can be achieved - output YES else output NO

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        // complete the code
        if ((a + b) % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}