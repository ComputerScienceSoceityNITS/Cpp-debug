#include<iostream>
using namespace std;


int recursion(int n){
    if(n==1){
        return 1;
    }
    int fact=recursion(n-1)*n;
    return fact;
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<recursion(n)<<endl;
}