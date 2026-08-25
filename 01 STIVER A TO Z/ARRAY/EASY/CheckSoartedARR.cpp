#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    bool sorted(vector<int>&arr){
        int fcount = 0;
        for(int i =0; i<= arr.size()-1; i++){
            if(arr[i]>arr[(i+1) % arr.size() ]){
                fcount++;
                if(fcount >=2){ return false;}
            }
        }
        return true;
    }
};
int main(){
    vector<int>arr = {1,2,3,1,2};
    vector<int>arr2 ={9,10,11};
    Solution sol;
    if(sol.sorted(arr)){
        cout<<"arr 1 is sorted"<<endl;
    }else{ 
        cout<<"arr1 is not sorted"<<endl;
    }
    if(sol.sorted(arr2)){
        cout<<"arr2 is sorted"<<endl;
    }
    else{
        cout<<"arr2 is not sorted"<<endl;
    }



}