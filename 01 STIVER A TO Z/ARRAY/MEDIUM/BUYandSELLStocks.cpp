#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int stocks(vector<int>&arr){
        int n = arr.size();
        long long maxgap = LLONG_MIN;
        for(int i =0; i<n ; i++){
            long long gap = 0;
            for(int j = i ; j<n ; j++){
                gap = arr[j]-arr[i];
                if(gap>maxgap){
                    maxgap = gap;
                }
            }
        }
        return maxgap;
    }
    int optimal(vector<int>&arr){
        int n = arr.size();
        int minvalue =arr[0];
        int maxvalue =0;
        for(int i =1; i<n ; i++){
            if(minvalue>arr[i]){
                minvalue = arr[i];
            }
            maxvalue = max(maxvalue,arr[i]-minvalue);
        }
        return maxvalue;
    }
};
int main(){
    vector<int>arr = {7,1,5,3,6,4};
    Solution sol;

    int result = sol.stocks(arr);
    cout<<"max profit by brute force : "<< result<<endl;

    int result2 = sol.optimal(arr);
    cout<<"max profit by optimal approach : "<< result<<endl;

    return 0;

}