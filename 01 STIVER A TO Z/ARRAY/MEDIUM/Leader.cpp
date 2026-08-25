#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>leaders(vector<int>&arr){
        int n = arr.size();
        vector<int>leader;
        int lead = arr[n-1];
        leader.push_back(arr[n-1]);
        for(int i = n-2; i>=0; i-- ){
            if(lead<=arr[i]){
                lead = arr[i];
                leader.push_back(arr[i]);
            }
        }
        reverse(leader.begin(),leader.end());
        return leader;
    }
};
int main(){
    vector<int>arr = {4, 4, 3};
    Solution sol;
    vector<int>result = sol.leaders(arr);
    for(int i : result ){
        cout<<i<<" ";
    }
    return 0;
}