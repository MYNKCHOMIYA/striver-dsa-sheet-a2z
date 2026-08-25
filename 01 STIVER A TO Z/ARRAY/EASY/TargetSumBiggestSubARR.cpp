#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int subarr(vector<int>&arr,int target){
    int left =0; int right =0; int maxlen = 0; int n = arr.size();
    int sum = arr[0];

    while(right<n){
        
        while(left<=right && sum> target){
            sum = sum - arr[left];
            left++;

        }

        if(sum == target){
            maxlen = max(maxlen,right-left+1);
        }

        right++;
        if(right<n){
        sum = sum + arr[right];}

        }    
        return maxlen;
    }
};
int main(){
    vector<int>arr= {10,5,2,7,1,9};
    Solution sol;
    int result = sol.subarr(arr,25);
    cout<<" max lenght of subarray with the sum : "<<result<<endl;
    return 0 ;

}