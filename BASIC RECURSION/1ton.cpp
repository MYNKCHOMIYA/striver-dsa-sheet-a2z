#include<bits/stdc++.h>
using namespace std;
int repeat(int current , int n){
    if(current<=n){
    cout<<current<<"\n";
    repeat(current+1,n);
    return current;}
    return 0;
}

int main(){
 int current = 1 ;
 int n;

 cout<<"last number where to stop : ";
 cin>>n;
 repeat(current,n);
}