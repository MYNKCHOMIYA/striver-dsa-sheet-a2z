#include<iostream>
using namespace std;

void count(int n){
    for(int i =1; i<=n; i++){
        for(int j =0; j<=(2*n)-1;j++){
            if(j<i){
                cout<<j+1;
            }
            else if(j>=((2*n)-i)){
                cout<< (2*n)-j;
            }
            else{
                cout<<" ";
            }
    }
    cout<<endl;

    }
}

int main(){
 count(4);
}