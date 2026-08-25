#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count =1;
        int maxcount =1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int start = nums[0];
        for(int i = 1; i<n ; i++){
            if(1+nums[i-1] == nums[i] ){
                count++;
                maxcount = max(count,maxcount);

            }
            else if(nums[i-1] == nums[i]){
                continue;
            }else{
                // maxcount = max(count,maxcount);
                start = nums[i];
                count = 1;
            }
            
            
        }
    
        return maxcount;
    }

    int Longest(vector<int>&nums){
        int maxlen =0;
        if(nums.empty()) return 0;
        unordered_set<int>st;
        for(int i =0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto it: st){

            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
            
            while(st.find(x+1) != st.end()){
                cnt++;
                x++;
            } 
            maxlen= max(maxlen,cnt);
        }
       
        }
        for(int i : st){
            cout<<i<<" ";
        }
        return maxlen;
    }
};

int main(){
    Solution sol;
    vector<int>arr = {100, 4, 200, 1, 3, 2};
    int result = sol.longestConsecutive(arr);
    cout<<result<<endl ;
    int result2 = sol.Longest(arr);
    cout<<endl<<result2<<endl;
    return 0;

}