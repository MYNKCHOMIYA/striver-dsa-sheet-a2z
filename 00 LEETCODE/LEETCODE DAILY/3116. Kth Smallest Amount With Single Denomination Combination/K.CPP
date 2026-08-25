#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long find(vector<int>& coins, int target) {
    vector<int>ans;

    for(int i =1; i<=target; i++){
        int mult =1;
        for(int  j =0; j<coins.size();j++){
            mult = coins[j]*i;
            ans.push_back(mult);
        }
    }
    sort(ans.begin(),ans.end());
    return ans[target];
    }
};

int main(){
    vector<int>coins = {5,2};
    Solution sol;
    cout<<sol.find(coins,7);
    return 0;
}