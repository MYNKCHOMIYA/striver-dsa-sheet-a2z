#include<bits/stdc++.h>
using namespace std;
//selection sort
vector<int>sorted(vector<int>&unsorted_arr){
    
    for(int i =0 ; i<unsorted_arr.size(); i++){
        int min_idx = i;
        for(int j =i ; j<unsorted_arr.size();j++){
            if(unsorted_arr[j]<unsorted_arr[min_idx]){
                int min_idx = j;
            }
        }
        if(min_idx != i ){
            swap(unsorted_arr[i],unsorted_arr[min_idx]);
        }    
    
    }
    return unsorted_arr;
}
int main(){
    vector<int>unsorted_arr;
    unsorted_arr = {45,6,7,8,4,2,3,23,43,53,1};
    vector<int>result = sorted(unsorted_arr);
    for(int i : result){
        cout<<i<< " ";
    }
    return 0;
}