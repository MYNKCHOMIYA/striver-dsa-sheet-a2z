#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void pos(vector<int>&arr,int target){
        int low =0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = low+((high-low)/2);
            if(arr[mid]==target){
                cout<<arr[mid]<<" "<<arr[mid];
                return;
            }
            if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        int floor = -1;
        int ceil = -1;
        if(low-1>=0){

            floor = arr[low-1];
        }
        if(low<arr.size()){
            ceil = arr[low];
        }
        cout<<floor<<" "<<ceil<<endl;
    }
};
int main(){
    vector<int>arr = {3, 4, 4, 7, 8, 10};
    Solution sol;
    sol.pos(arr,2);
    return 0;

}