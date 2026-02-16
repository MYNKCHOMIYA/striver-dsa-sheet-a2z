#include<bits/stdc++.h>
using namespace std;
void basic(int a, int n){
    if(n<=0){ 
        return ;
    }
    cout<<a<<"\n";
    basic(a,n-1);

}
int main(){
    int a;
    cout<<"enter a number to print n time : ";
    cin>>a;
    int n; 
    cout<<"enter value of n : ";
    cin>>n;
    basic(a,n);
}
