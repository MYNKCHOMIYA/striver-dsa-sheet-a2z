#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool LinearSearch(vector<int>&arr,int k){
        for(int i =0; i<arr.size(); i++){
            if(arr[i] == k){
                return true;
                break;
            }
        }
        return false;
    }
};
int main(){
    vector<int>arr = {4,6,7,3,6,8,4,7,9};
    Solution sol;
    cout<<endl;
    cout<<"enter a element to search in vector : ";
    int n;
    cin>>n;
    bool result =sol.LinearSearch(arr,n);
    if(result){
        cout<<"number found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}