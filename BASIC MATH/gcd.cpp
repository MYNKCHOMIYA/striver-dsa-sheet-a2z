#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0){
        return b;
    } return a;
}
int main(){
     int a;
     int b;
     cout<<"enter a number : ";
     cin>>a;
     cout << "enter a number : ";
     cin>>b;
    int result =gcd(a,b);
    cout<<a<<" and "<<b<<" gcd is : "<<result;
}