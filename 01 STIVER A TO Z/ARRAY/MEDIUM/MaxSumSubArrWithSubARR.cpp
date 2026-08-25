#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int MaxSum(vector<int>&arr){
        long long maxsum = LLONG_MIN;
        long long sum =0;
        int start = 0;
        int ans_end =-1;
        int ans_start = -1;
        for(int i =0; i<arr.size(); i++){
            sum = sum +arr[i];
            if(sum>maxsum){
                maxsum = sum;
                ans_start = start;
                ans_end =i; 
            }
            if(sum < 0){
                sum = 0;
                start = i+1;
            }
        }
        cout<<"subarray of the max sum : ";
        for(int i = ans_start ; i<=ans_end; i++){
            cout<<arr[i]<<" ";
        }
        return maxsum;
    }
};
int main(){
    vector<int>arr = {-2, -3, -7, -2, -10, -4};
    Solution sol;
    int result = sol.MaxSum(arr);
    cout<<endl<<"max sum : "<<result;
    return 0;
}