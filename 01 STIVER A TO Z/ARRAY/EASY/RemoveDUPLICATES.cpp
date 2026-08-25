#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    set<int>arr(vector<int>&arr){
        set<int>WDup;
        for(int i =0; i<=arr.size()-1;i++){
            WDup.insert(arr[i]);
        }
        return WDup;
    }

    int unique(vector<int>&arr){
        int j =0;

        for(int i =1; i<=arr.size()-1; i++){
            if(arr[j]!=arr[i]){
                j++;
                arr[j] = arr[i];
            }
        }
        return j+1;
    }
};
int main(){
    vector<int>arr = {1,2,4,4,5,6,7,8,9,9,9,33};
    Solution sol;

    set<int>result = sol.arr(arr);
    for(int i : result){
        cout<< i << " ";
        
    }cout<<endl;

    int uninum = sol.unique(arr);
    cout<<" total unique elements : " << uninum<<endl;
    for(int i = 0; i<=uninum-1 ; i++){
        cout<< arr[i] << " " ;
    }
    cout<<endl;

    return 0;
}