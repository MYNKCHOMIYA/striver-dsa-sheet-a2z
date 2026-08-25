#include<bits/stdc++.h>
using namespace std;

vector<int>fab(int n){
    vector<int>faab;
    if(n>=0){
        faab.push_back(0);
    }
    if(n>=1){
        faab.push_back(1);
    }
    int next = 1;
    for(int i = 2; i< n; i++){
        int next = (i-1)+(i-2);
        faab.push_back(next);
    }
    return faab;
}

int main(){
    int n;
    cout<<endl<<"enter a number to sill find the fabonaccci series : "<<endl;
    cin>>n;
    vector<int>result;
    result = fab(n);
    for(int i : result){
        cout<< i <<" ";
    }
    return 0;
}