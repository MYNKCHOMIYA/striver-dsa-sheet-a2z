#include<bits/stdc++.h>
using namespace std;

int patt(int n){
    if(n<=0){
        return 0;
    }
    cout<<"heloo"<<endl;
    n--;
    return patt(n);
}

int main(){
    patt(5);
    return 0;
}