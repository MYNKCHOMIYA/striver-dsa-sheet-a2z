#include<bits/stdc++.h>
using namespace std;

void patt(int start,int count , int end){

    cout<<count<<endl;
    if(count==end){
        return;
    }
    count =count+1;
    patt(start,count,end);
}

int main(){
    int n;
    cout<<"enter where is counting should end : "<<endl;
    cin>>n;
    patt(1,0,n);
    return 0;
}