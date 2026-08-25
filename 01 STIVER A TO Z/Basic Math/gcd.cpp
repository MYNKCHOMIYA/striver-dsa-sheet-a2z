#include<iostream>
using namespace std;

int m1(int a,int b){
    int gcd =1;
    for(int i = 1; i<=min(a,b); i++){
        if(a%i == 0 && b%i ==0){
            gcd = i;
        }
    }
    return gcd;
}

int m2(int a , int b){
    for(int i = min(a,b); i> 0 ; i--){
        if(a%i ==0 && b%i ==0){
            return i;
        }
    }
    return 1;
}

int m3(int a , int b){
    if( b ==0 ){
        return a;
    }
    return m3(b, a%b);
}

int m4(int a , int b ){
    while( a> 0 & b >0){
        if(a>b ){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if( a==0){
        return b;
    }
        return a;
}

int main(){
    int result = m1(5,20);
    int result2 = m2(2,15);
    int result3 = m3(90,100);
    int result4 = m4(90,100);
    cout<< " gcd by m1: "<<result<<endl;;
    cout<< " gcd by m2 : "<<result2<<endl;
    cout<< " gcd by m3 : "<<result3<<endl;
    cout<< " gcd by m4 : "<<result4<<endl;
    return 0;
}