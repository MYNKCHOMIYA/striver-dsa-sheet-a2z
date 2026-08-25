#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int>sort(vector<int>&arr,int n,int i){
        if (i >= n){return arr;} 
        int j = i;

       while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
       }

       return sort(arr,n,i+1);
    }
};
int main(){
    vector<int>arr = {3,5,7,3,2,6,3,5,4,64,3,5,2,46,3};
    Solution sol;
    vector<int>result = sol.sort(arr,arr.size(),0);
    for(int i :result){
        cout<< i<< " ";
    }
    return 0;
}