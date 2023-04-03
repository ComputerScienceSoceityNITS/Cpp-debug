#include<iostream>
using namespace std;

//create a recursive funtion of the following logic given in the main function.
int recursion(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*recursion(n-1);
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<recursion(n)<<endl;
}