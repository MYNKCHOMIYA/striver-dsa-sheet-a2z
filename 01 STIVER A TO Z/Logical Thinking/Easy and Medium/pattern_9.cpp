#include<iostream>
using namespace std;


int star(int n){
    for(int i= 1; i<=(n/2)+1;i++){
       int total_stars = 2*i-1;
       int total_gaps = n- total_stars;
       for(int j =1; j<= total_gaps/2; j++){
        cout<<" ";
       }
       for(int k =1; k<= total_stars ; k++){
        cout<<"*";
       }
       cout<<endl;
    }

    for(int i = (n/2)+1; i>0 ; i--){
        int total_stars= 2*i-1;
        int total_gaps = n -total_stars;
        for(int j =1; j<= total_gaps/2;j++){
            cout<<" ";
        }
        for(int i =1; i<= total_stars; i++){
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