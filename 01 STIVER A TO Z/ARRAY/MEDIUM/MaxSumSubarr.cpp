#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int MaxSum(vector<int>&nums){
        int n  = nums.size();
        long long sum = 0;
        long long  maxsum = LLONG_MIN;
        for(int i =0; i<n; i++){
            long long sum =0;
            for(int j = i ; j<n ;j++){
                sum = sum + nums[j];
                maxsum = max(sum,maxsum);
            }
            
        }
        return maxsum;
    }

    int kadanes(vector<int>&arr){
        int n = arr.size();
        int sum = arr[0];
        int maxsum =arr[0];
        for(int i =1; i<n ; i++){
            if(sum<0){
                sum = arr[i];

            }
            else{
                sum = sum + arr[i];
                

            }
            if(sum>maxsum){
                maxsum =sum;

            }
        }
       
       
        return maxsum;
    }
    
};
int main(){
    vector<int>arr ={-2, -3, -7, -2, -10, -4};
    Solution sol;
    int result = sol.MaxSum(arr);
    cout<<"maximum sum using brute force : "<<result<<endl;
    

    int result2 = sol.kadanes(arr);
    cout<<"maximum sum using kadanes algo : "<<result2<<endl;

   
    
    return 0;
}
