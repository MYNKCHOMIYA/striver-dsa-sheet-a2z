#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&arr){
    int n = arr.size();
    int low =0; int high =n-1;
    while(low<high){
        int mid = low+(high -low)/2;
        if(arr[mid]<arr[high]){
            high = mid;
        }else if(arr[mid]>arr[high]){
            low = mid+1;
        }else{
            high--;
        }
    }
    return arr[low];
}
int main(){
    vector<int>arr = {3,4,5,1,2};
    int result = find(arr);
    cout<<result<<" "<<endl;
    return 0;
}