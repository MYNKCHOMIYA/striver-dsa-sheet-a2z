#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void rearr(vector<int>&arr){
        int n = arr.size();
        vector<int>pos;
        vector<int>neg;
        for(int i =0; i<n; i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }else{
                pos.push_back(arr[i]);
            }
        }
        cout<<endl<<" pos : ";
        for(int i =0; i <pos.size(); i++){
            cout<<pos[i]<<" ";
        }
        cout<<endl<<" neg : ";
        for(int j =0; j<neg.size(); j++){
            cout<<neg[j]<< " " ;
        }
    }

    vector<int>rearrange(vector<int>&arr){
        int n = arr.size();
        vector<int>ans(n,0);
        int pos = 0;
        int neg = 1;
        for(int i =0; i< n ; i++){
            if(arr[i]<0){
                ans[neg] = arr[i];
                neg = neg+2;
            }else{
                ans[pos] = arr[i];
                pos = pos+2;
            }
        }
        return ans;
    }

};
int main(){
    vector<int>arr ={ 1,2,-4,-5};
    Solution sol;
    sol.rearr(arr);
    cout<<endl;

    cout<<"rearranged array : ";
    vector<int>result2 = sol.rearrange(arr);
    for(int i : result2){
        cout<<i<<" ";
    }
    return 0;
}