#include<bits/stdc++.h>
using namespace std;

//bubble sort
vector<int>sorted_arr(vector<int>&unsorted_arr){
    int n = unsorted_arr.size();
    for(int i =0;i< n;i++){
        bool swapped =false; //for optimization for already sorted array o(n)
        for(int j =0; j< n-i-1;j++){
            if(unsorted_arr[j]>unsorted_arr[j+1]){
                swap(unsorted_arr[j],unsorted_arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            return unsorted_arr;
        }
    }
    return unsorted_arr;

}
int main(){
    vector<int>unsorted_arr;
    unsorted_arr = {56,6,745,324,34,23,3223,112,21,23,12,3,2,11,2,3,3,32,2,1,4};
    vector<int>result = sorted_arr(unsorted_arr);
    for(int i : result){
        cout<<i << " ";
    }
    return 0;
}