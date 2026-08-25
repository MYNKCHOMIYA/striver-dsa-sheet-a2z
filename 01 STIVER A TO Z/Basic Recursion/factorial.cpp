#include<iostream>
using namespace std;

int fact(int n){
    if(n ==0){
        
        return 1;
    }
    return fact(n-1)*n;
}
int main(){
    int n;
    cout<<"enter a number to find factorial : ";
    cin>>n;
    cout<<fact(n)<<endl<<endl;
    return 0;
}