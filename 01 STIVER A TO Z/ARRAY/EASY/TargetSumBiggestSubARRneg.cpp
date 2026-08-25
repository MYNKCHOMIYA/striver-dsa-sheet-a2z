#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int opt(vector<int>&arr){
        int sum = 0;
        int maxlen = 0;
        unordered_map<int,int>sumIndex;
        for(int i = 0; i<arr.size(); i++){
            sum = sum + arr[i];
            if(sum == 0){
                maxlen = i+1;
            }
            else if(sumIndex.find(sum) != sumIndex.end()){
                maxlen = max(maxlen,i - sumIndex[sum]);
            }
            else{
                sumIndex[sum] = i;
            }
        }
        return maxlen;
    }

    int brute(vector<int>&arr){
        int maxlen=0;
        for(int i =0; i<arr.size(); i++){
            int sum =0;
            for(int j = i ; j<arr.size(); j++){
                sum = arr[j] + sum;
                
                if(sum == 0){
                    maxlen = max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
};
int main(){
    vector<int>arr = {9, -3, 3, -1, 6, -5};
    Solution sol;
    cout<<endl;
    int result = sol.opt(arr);
    cout<<"lognest subarray for sum zero : " <<result<<endl ;

    int result2 = sol.brute(arr);
    cout<<"lognest subarray for sum zero of method 2: " <<result2<<endl ;
    return 0;
}