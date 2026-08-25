#include<iostream>
using namespace std;

void patt(int n){
        for(int i = 1;i<=n/2;i++){
            
            for(int j =1; j<=n; j++){
                
                if(j<=((n/2)-i+1)){ 
                cout<<"*"<<" ";
                }
                else if(j>(n/2+i-1)){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
        }cout<<endl;
    }

        for(int i =n/2+1; i<=n;i++){
            for(int j =1; j<=n; j++ ){
                int k = i-(n/2);
                if(j<=k){
                    cout<<"*"<<" ";
                }
                else if(j>n-k){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }cout<<endl;
        }
    }

int main(){
    patt(10);
}