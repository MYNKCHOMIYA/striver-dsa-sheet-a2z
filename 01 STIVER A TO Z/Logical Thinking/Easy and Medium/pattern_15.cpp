#include<iostream>
using namespace std;

void patt(int n){
    for(int i = n; i > 0 ;i--){
        for(int j =0; j < i ; j++){
            cout<<(char)('A'+ j);
        }
        cout<<endl;
    }
}

int main(){
    patt(5);
} 