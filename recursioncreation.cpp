#include <iostream>
using namespace std;

// create a recursive funtion of the following logic given in the main function.
int res = 1;
void recursion(int n)
{
    if (n == 0)
        return;
    res *= n;
    recursion(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    recursion(n);
    cout << res << endl;
}