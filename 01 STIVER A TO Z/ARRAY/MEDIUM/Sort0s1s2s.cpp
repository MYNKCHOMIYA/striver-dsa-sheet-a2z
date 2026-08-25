#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>sorti(vector<int>&nums){
        int n = nums.size();
        int low =0; int mid =0; int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;low++;
            }
            else if(nums[mid] ==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }

        }
        return nums;
    }
}; 
int main(){
    vector<int>nums = {1,0,0,2,1,0,2,1,1};
    Solution sol;
    vector<int>result = sol.sorti(nums);
    for(int i : nums){
    cout<<i<<" ";}
    return 0;

}