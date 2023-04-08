#include<iostream>
using namespace std;


//create a recursive funtion of the following logic given in the main function.
int recursion(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*recursion(n-1);
    }
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 1; 
    for(int i = n ; i  >= 1 ;i--){
        ans = ans * i;   
    }
     ans=recursion(n);
    cout<<ans<<endl;
}