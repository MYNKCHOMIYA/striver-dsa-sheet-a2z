#include<bits/stdc++.h>
using namespace std;

void st(string a,int n){
    if(n<=0){
        return ;
    }
    cout<<n<<". " <<a <<"\n";
    st(a,n-1);

}
int main(){
    int n;
    string a;
    cout<<"enter the string want to print : ";
    cin>>a;
    cout<<"enter the number of times of print : ";
    cin>>n;
    
    st(a,n);
}