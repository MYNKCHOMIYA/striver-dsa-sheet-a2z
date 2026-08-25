#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :

    void merge(int low,int mid,int high, vector<int>&arr){
        vector<int>temp;
        int left = low;
        int right = mid+1;

        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i =low;i<=high; i++ ){
            arr[i] = temp[i-low];
        }
    }
    void mergesort(vector<int>&arr,int low,int high){
        if (low>= high) return ; 
        int mid = low+(high-low)/2;

        mergesort(arr,low,mid);

        mergesort(arr,mid+1,high);

        merge(low,mid,high,arr);
        
        
    }
};

int main(){
    Solution s;
    vector<int>arr = { 4,5,6,7,3,2,221,24,3,12,3,42,123,35,874,2,246,7,943,2,134,5};
    s.mergesort(arr,0,arr.size()-1);

    for (int i : arr){
        cout<<i<<" ";
    }
}