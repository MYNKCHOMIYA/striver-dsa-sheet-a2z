#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search(vector<int>&nums,int target){
        return rec(nums,target,0, nums.size()-1);
    }
    private:
    int rec(vector<int>&nums,int target,int low,int high){
        int mid = low+((high-low)/2);

        if(low>high){
            return -1;
        }
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]<target){
            return rec(nums,target,mid+1,high);
        }
        return rec(nums,target,low,mid-1);
    }
    
};

int  main(){
    vector<int>arr  = {-1,0,3,5,9,12};
    Solution sol;
    int result = sol.search(arr,-1);
    cout<<"index no. : " <<result;
    return 0;
}