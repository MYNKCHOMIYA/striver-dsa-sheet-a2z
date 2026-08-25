#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Maj(vector<int>&nums){
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>freq;
        
        for(int i =0; i<n; i++){
            freq[nums[i]]++;    
        }

        for(auto& [element,count]:freq){
            if(count>n/2){
                return element;
            }
        }
        return -1;
    }
    // this only applicable when the maj is bigger than n/2
    int votpow(vector<int>&nums){
        int element = 0; int count = 0;  
        int n = nums.size();
        for(int i =0; i<n ;i++){
            if(count == 0){
                element = nums[i];
                count =1; 
            }
            else if(element == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return element ;

    }
}; 
int main(){
    vector<int>nums = {2,2,1,1,1,2,2};
    Solution sol;
    int result = sol.Maj(nums);
    cout<<"result 1 : "<<result<<endl;

    int result2 = sol.votpow(nums);
    cout<<"result 2 : "<<result2<<endl;
    return 0;
}
