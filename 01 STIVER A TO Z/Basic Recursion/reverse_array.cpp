#include<bits/stdc++.h>
using namespace std;

vector<int>rev(vector<int>&arr,int start,int end){

    if(start==end || start>end){
        return arr;
    }
    swap(arr[start],arr[end]);
    start = start +1;
    end = end-1;
    return rev(arr,start,end);

}

int main(){
    vector<int>arr ={3,6,78,90,6};
    vector<int>revarr;
    int n = arr.size();
    rev(arr, 0 , n-1);
    for( int i : arr){
        cout<<i<<" ";
    }
    return 0;
}