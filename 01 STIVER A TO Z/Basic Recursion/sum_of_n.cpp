#include<iostream>
using namespace std;

void patt(int start,int sum, int end){
    sum = sum + start;
    if(start == end){
        cout<<"sum of "<< end << " number is : " <<endl;
        cout<<sum<<endl;
        return;
    }
    start = start +1;
    patt(start,sum,end);
    
}

int main(){
    int n ;
    cout<<"enter a number to do sum ";
    cin>>n;
    patt(0,0,n);
    return 0;
}