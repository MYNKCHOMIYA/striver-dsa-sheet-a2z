#include<iostream>
using namespace std;

void cot(int n){
    int count =1;
    for(int i =1; i<= n ; i++){
        for(int j =0; j< i ; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

}

int main(){
    cot(5);
}