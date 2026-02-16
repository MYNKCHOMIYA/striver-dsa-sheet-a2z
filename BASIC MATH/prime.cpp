#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<=1) return 0;
    
    for(int i =2; i<=int(sqrt(n));i++){
        if(n%i == 0){
            return false;
        } 
    }
return true;
};

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(prime(n)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    
}