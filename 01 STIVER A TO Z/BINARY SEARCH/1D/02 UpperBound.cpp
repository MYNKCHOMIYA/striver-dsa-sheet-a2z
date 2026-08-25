#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int upper(vector<int>&arr,int target){
        return rec(arr,target,0,arr.size()-1,-1);
    }

    private:
    int rec(vector<int>&arr,int target,int low, int high,int maxi){
        if(low>high){
            return maxi;
        }
        int mid = low+((high-low)/2);
        if(arr[mid]==target){
            return rec(arr,target,mid+1,high,mid);
        }   
        if(arr[mid]<target){
            return rec(arr,target,mid+1,high,maxi);
        }
        return rec(arr,target,low,mid-1,maxi);
    }
};

class Solution2{
    public:
    int sec(vector<int>&arr,int target){
            int low = 0;
            int high = arr.size()-1;
            
            int maxi =-1;

            while(low<=high){
                int mid = low+((high-low)/2);
                if(arr[mid]==target){
                    maxi = mid;
                    low = mid+1;
                }
                else if(arr[mid]<target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            return maxi;
        }
    
};
int main(){
    vector<int>arr  = {1,2,4,4,6,6,78};
    Solution sol;
    Solution2 sol2;
    int result = sol2.sec(arr,4);
    cout<<"upper bound :"<<result;
    return 0;

    
}