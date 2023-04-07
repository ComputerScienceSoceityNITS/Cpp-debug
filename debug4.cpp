#include <bits/stdc++.h>
using namespace std;

int q(int arr[], int l, int r, int x)
{
    for(int i=l; i<r; ++i)
    {
        if(arr[i]==x){return i;}
    }

    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = q(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}