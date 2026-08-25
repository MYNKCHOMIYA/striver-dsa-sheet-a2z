#include<iostream>
using namespace std;

bool digit(int n){
    int org = n;
    int rev_number = 0;
    while(n>0){
        int last_digit =n%10;
        rev_number = rev_number*10+last_digit;
        n= n/10;

    }
    return (rev_number = org);
}

int main(){
    if(digit(121)){
        cout<<"number is palindrom";

    }
    else{
        cout<<"number is not palindrom";
    }
    return 0;
}