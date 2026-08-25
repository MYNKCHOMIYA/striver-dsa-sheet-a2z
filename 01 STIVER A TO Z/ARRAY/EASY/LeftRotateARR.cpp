#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int>rotated(vector<int>arr){
        int temp = arr[0];
        for(int i =0 ; i<=arr.size()-2; i++){
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1] = temp;
        return arr;
    }

};
int main(){
    vector<int>arr = {1,2,3,4,5};
    Solution sol;
    vector<int>result = sol.rotated(arr);
    for(int i : result){
        cout<< i << " ";
    }
    cout<<endl;
    return 0;
}