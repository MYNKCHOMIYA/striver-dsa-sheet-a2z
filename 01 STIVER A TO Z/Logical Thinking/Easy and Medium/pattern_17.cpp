#include<iostream>
using namespace std;

void patt(int n){
    for(int i =1; i<n ;i++){
       int total_char = 2*i - 1;
       int total_spaces = 2*n - total_char;

       for(int j =0; j<total_spaces/2;j++){
        cout<<" ";
       }
       int ch =0;
       for(int k = 0; k<total_char; k++){
        cout<<(char)('A'+ch);
        if (k< (total_char/2)){
            ch++;
        }
        else{
            ch--;
        }
    } 
    cout<<endl;
       }
       

    }

int main(){
    patt(5);
}