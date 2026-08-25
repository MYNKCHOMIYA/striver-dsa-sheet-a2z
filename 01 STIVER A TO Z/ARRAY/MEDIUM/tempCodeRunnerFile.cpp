#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sm(vector<int>&arr,int target){
        int n = arr.size();
        int sum =0;
        int start =0;
        int end =1;
        int count =0;
        while(start<n && end <n){
            for(int i =start; i<=end; i++){
                sum = arr[i]+sum;
            }
            end++;
            while(sum>target && start<n){
                sum = sum -arr[start];
                start++;
            }
            if(sum == target){
                count++;
            }
        }
        return count;
    }
};
int main(){
    vector<int>arr = {3, 1, 2, 4};
    Solution sol;
    int result = sol.sm(arr,6);
    cout<<result<<endl;
    return 0;

}