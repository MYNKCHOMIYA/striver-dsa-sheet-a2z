#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void cott(vector<int>&arr){

        int count = 0;
        int maxi =0;

        for(int i = 0 ; i<arr.size(); i++){
            if(arr[i]==1){
                count++;
            }
            else{
                count =0;
            }
            maxi= max(maxi,count);
        }
        
        cout<<"Consective 1`s : "<<maxi <<endl;
    }
};

int main(){
    vector<int>arr  = { 1,1,1,1,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1};
    Solution sol;
    sol.cott(arr);
    return 0;
}