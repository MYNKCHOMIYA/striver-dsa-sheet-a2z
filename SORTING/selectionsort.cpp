#include<bits/stdc++.h>
using namespace std;

void ss(vector<int>&arr){
    int n =arr.size();
    for(int i =0; i<=n-2;i++){
         int min= i;
        for(int j =i;j<=n-1;j++){
           if(arr[j]<arr[min]){
            min =j;
           }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    vector<int>a;
    a ={13,46,24,52,20,9};
    ss(a);
    for(int x : a) cout<<x<<" ";
    return 0;
}