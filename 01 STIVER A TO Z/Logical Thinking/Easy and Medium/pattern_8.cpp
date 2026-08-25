#include<iostream>
using namespace std;

int star(int n){


    for(int i = (n/2)+1 ; i > 0 ; i--){
        int total_star = 2*i-1;
        int total_space = n -total_star;

        for(int j = 1;j <= (total_space/2);j++){
            cout<<" ";
        }

        for(int k = 1; k<= total_star; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}

int main(){
    star(7);
    return 0;
}