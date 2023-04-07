#include <bits/stdc++.h> 
using namespace std;

int q(int arr[], int x, int n)
{
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = q(arr, x, n);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}