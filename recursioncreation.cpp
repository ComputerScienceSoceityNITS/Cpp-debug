#include<iostream>
using namespace std;


//create a recursive funtion of the following logic given in the main function.
int factorial(int n);
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 1;
    /*
    for(int i = n ; i  >= 1 ;i--){
        ans = ans * i;   
    }
    */ 
   ans = ans * factorial(n);

    
    cout<<ans<<endl;
}
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}
