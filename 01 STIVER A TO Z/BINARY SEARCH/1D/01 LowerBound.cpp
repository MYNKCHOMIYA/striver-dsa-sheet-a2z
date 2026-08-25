#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lower(vector<int>&arr,int target){
        return rec(arr,target,0,arr.size()-1,arr.size());
    }
    private:
    int rec(vector<int>&arr,int target,int low,int high,int maxi){
        int mid = low+((high-low)/2);
        if(low>high){
            return maxi;
        }
        if(arr[mid]==target){
            return rec(arr,target,low,mid-1,mid);
        }
        if(arr[mid]<target ){
            return rec(arr,target,mid+1,high,maxi);
        }
        return rec(arr,target,low,mid-1,maxi);
    }
};

int main(){
    vector<int>arr={1,1,1,1,1,2,2,2,3};
    Solution sol;
    int result = sol.lower(arr,2);
    cout<<"lower bound : "<<result;
    return 0;

}