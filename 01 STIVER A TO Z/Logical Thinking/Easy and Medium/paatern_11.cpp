#include<iostream>
using namespace std;

int bin(int n){
    for(int i =0; i< n ;i++){
        for(int j =1; j<=i+1; j++){
            cout<<((i+j)%2);
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    bin(5);
}