#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b)
{
    // write the function here
    int  f1[26]={0},f2[26]={0};//initiasing the array with 0.
      f1[a-97]++; //sky value 
      f2[b-97]++;
       for(int i=0;i<26;i++)
       {
          if(f1[i]!=f2[i]) //sky value comparison in array formed .
            return false;
        }
         return true;
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