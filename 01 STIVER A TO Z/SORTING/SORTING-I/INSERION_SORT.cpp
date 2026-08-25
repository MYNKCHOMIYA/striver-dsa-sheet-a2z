#include<bits/stdc++.h>
using namespace std;

vector<int>sorted(vector<int>&unsorted_arr){
   int n = unsorted_arr.size();
   for(int i =1 ; i< n ; i++){
    int j = i-1;
    int key = unsorted_arr[i];
        while(j>=0 && unsorted_arr[j]>key){
            unsorted_arr[j+1] = unsorted_arr[j];
            j--;
        }
    unsorted_arr[j+1] = key;    
    }
    
   
   return unsorted_arr;
}


int main(){
    vector<int>unsorted_arr;
    unsorted_arr = {9,8,7,6,10,4,53,4};
    vector<int>result = sorted(unsorted_arr);
    for(int i : result){
        cout<< i << " ";
    }
    return 0;
}