#include<bits/stdc++.h>
using namespace std;

int dig(int digit){
    if (digit == 0 ) return 1;
    int count = 0;
    digit = abs(digit);
    count = int(log10(digit)+1);
    return count;

}


int main(){
    int a;
    cout<<"enter your number : ";
    cin>>a;
    int result = dig(a);
    cout<<"the digits in number : "<<result;
}