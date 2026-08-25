#include<iostream>
using namespace std;

int number(int n){
    int rev_number = 0;
    while(n>0){
        int last_digit = n%10 ;
        rev_number = rev_number*10+last_digit;
        n =n/10;
    }
    return rev_number;    
}

int main(){
    int result = number(789);
    cout<<result;
    return 0;
}