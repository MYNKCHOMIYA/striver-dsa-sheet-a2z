#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>bubble(vector<int>&arr, int n){
            if(n <= 1) return arr ;
            
            int swapped = false;
            for(int i = 0; i< n-1 ; i++){
                
                if(arr[i]>arr[i+1]){
                    swap( arr[i] , arr[i+1]);
                    swapped = true;
                }
            }
            if(!swapped ){
                return arr;
            }
            return bubble(arr,n-1);
        }
};
int main(){
    vector<int>arr= {5,76,32,56,7,32,3,5};
    Solution sol;
    
    vector<int>result = sol.bubble(arr,arr.size());

    for(int i : result){
        cout<<i<<" ";
    }
    return 0;
}