#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
    vector<int>zero(vector<int>&arr){
        int zero_idx = -1;
            for(int i =0 ; i< arr.size(); i++){
                if(arr[i] == 0){
                    zero_idx = i;
                    break;
                }
            }
            if(zero_idx == -1){ return arr;}

            for(int i = zero_idx+1; i<arr.size(); i++){
                if(arr[i] != 0){
                    swap(arr[i],arr[zero_idx] );
                    zero_idx++;
                }
            }
            return arr;
    }
};
int main(){
    vector<int>arr = {0,1,0,3,12};
    Solution sol;
    vector<int>result = sol.zero(arr);
    for(int i : result){
        cout<< i <<" ";
    }
    cout<<endl;
    return 0;
}