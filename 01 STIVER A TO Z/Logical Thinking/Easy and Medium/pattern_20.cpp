#include<iostream>

using namespace std;

void patt(int n){
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=2*n;j++){
           if(j<=i){ 
            cout<<"*"<<" ";
            }
            else if(j>=2*n-i){
                cout<<"*"<<" ";
            }
            else{
                cout<<"-"<<" ";
            }
        }cout<<endl;}
    for(int i = n; i>0;i--){
        for(int j =1; j<=2*n;j++){
            if(j<=i){
            cout<<"*"<<" ";
            }
            else if(j>2*n-i){
                cout<<"*"<<" "; 
            }
            else{
                cout<<"-"<<" ";
            }
        }cout<<endl;
    }


}

int main(){
    patt(5);
}