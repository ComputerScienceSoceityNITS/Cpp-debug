#include <bits/stdc++.h>
using namespace std;

int q(int arr[], int l, int r, int x)
{
    if (r >= l) // for ensuring the right and left pointer position
    {
        int o = l + (r - l) / 2; //calculating the mid

        if (arr[o] == x)// if matches with target return its index
            return o;

        if (arr[o] > x)//if greater ,search in left side 
            return q(arr, l, o - 1, x);

        return q(arr, o + 1, r, x); //else search in right side 
    }

    return -1;//if not found!! return -1
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;           // target element 
    int n = sizeof(arr) / sizeof(arr[0]);//calculating the size of the array
    int result = q(arr, 0, n - 1, x);
    (result == -1) 
        ? cout << "Element is not present in array"//if result ==-1 then this condition will get executed
        : cout << "Element is present at index " << result; //else this 
    return 0;
}