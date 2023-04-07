#include <bits/stdc++.h>
using namespace std;

int q(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int o = l + (r - l) / 2;

        if (arr[o] == x)
            return o;

        if (arr[o] < x)
            l = o + 1;
        else
            r = o - 1;
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