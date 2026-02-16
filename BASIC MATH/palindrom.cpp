#include<bits/stdc++.h>
using namespace std;

bool palindrom(int n){
    int revnum = 0;
    int dupnum = n;
    while(n>0){
        int lastdig = n%10;
        revnum = revnum*10+lastdig;
        n = n/10;
    }
    if(dupnum == revnum){
        return true;
    } return false;

}
int main(){
    int n = 0 ;
    cout <<"enter a number : ";
    cin>> n ;

    if (palindrom(n))
    {
        cout<<"palindrom number";
    }
    else{
        cout<<"not palindrom";
    }
    return 0;
    }