#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&arr,int k){
    int n = arr.size();
    int low = 0; int high = n-1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==k){
            return true;}
        if(arr[mid]==arr[low] && arr[mid] == arr[high]){
                low++;
                high--;
                continue;
            }

        if(arr[low]<=arr[mid]){
            if(k<arr[mid] && k>=arr[low]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(k<=arr[high] && k>arr[mid]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        }
        return false;
}
int main(){
    vector<int>arr = { 7, 8, 1, 2, 3, 3, 3, 4, 5, 6 };
    if(find(arr,10)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    return 0;
}