#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int div0 =0;
    if(n<=1){
        return false;
    }
    for(int i = 1; i<=n;i++){
    if(n%i == 0){
        div0++;
    }
    } 
    if(div0>2){
        return false;
    }
    return true;
}

bool prime2(int n){
    int cnt =0;
    if(n<=1){
        return false;
    }
    for(int i= 1; i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
        
        if(n/i !=i){
            cnt++;
        }
    }
    }
    if(cnt ==2){
        return true;
    }
    return false;
}

bool prime3(int n){
    if(n<=1){return false;}
    for(int i =2; i*i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }return true;
}
int main(){

    if(prime(7)){
        cout<<"number"<< " is prime"<<endl;; 
    }
    else{
        cout<<"number is not prime"<<endl;;
    }

    if(prime2(7)){
        cout<<"number"<< " is prime by sec method "<<endl;; 
    }
    else{
        cout<<"number is not prime by sec method " <<endl;
    }
     if (prime3(7)) {
        cout << "7 is prime by the professional method" << endl;
    } else {
        cout << "7 is not prime by the professional method" << endl;
    }
    return 0;
}