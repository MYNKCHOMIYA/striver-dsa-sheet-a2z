#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int twosum(vector<int>&arr,int target){
        int n = arr.size();
        sort(arr.begin(),arr.end());

        int right = n-1;
        int left =0; 
        

        while(left<right){
            int sum = arr[right] +arr[left];
            if(sum < target ){
                left++;
                
                
            }
            else if(sum>target ){
                right--;
                
            }
            else {
                cout<<arr[left]<<" "<<arr[right]<<endl;
                return right-left+1;
            }
        }
        return 0;
    }
};

int main(){
    vector<int>arr = {2,6,5,8,11};
    Solution sol;
    int result = sol.twosum(arr,14);

    cout<<result<<endl;
    return 0;
}