#include<iostream>
using namespace std;


void patt(int n ){
    for(int i = 0; i<n ; i++){
        for(int j =0; j<i; j++){
            cout<<(char)('A' + (i-1))<<" ";
        }
        cout<<endl;
    }
}
int main(){

    patt(7);
    return 0;
}