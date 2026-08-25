#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int find(vector<int>&arr,int target){
        int low =0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = low+((high-low)/2);
            if(target == arr[mid]){
                return mid;
            }
            
            if(arr[low]<=arr[mid] ){
                if(arr[mid]>target && arr[low]<=target){
                    high = mid -1;
                }else{
                    low = mid+1;
                }
            }
            else{
                if(arr[mid]<target && target <= arr[high] ){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
int main(){
    vector<int>arr ={4,5,6,7,1,2,3};
    Solution sol;
    cout<<sol.find(arr,3);
    return 0;
}