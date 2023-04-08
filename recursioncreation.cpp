#include<iostream>
using namespace std;


//create a recursive funtion of the following logic given in the main function.

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    
    cout<<factorial(n)<<endl;
}