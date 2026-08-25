#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // int sm(vector<int>&arr,int target){
    //     int n = arr.size();
    //     int sum =0;
    //     int start =0;
    //     int count =0;
    //     for(int end =0 ; end<n ; end++){
    //         sum =sum +arr[end];
    //         while(sum>target && start<=end){
    //             sum = sum - arr[start];
    //             start++;
    //         }
    //         if(sum ==target ){
    //             count++;
    //         }
    //     }
    //     return count;
    // }

    int prefix(vector<int>&arr,int target){
        unordered_map<int,int>prefixsumcount;
        int n = arr.size();
        int prefixsum =0;
        prefixsumcount[0]=1;
        int remove =0;
        int count =0;
        for(int i =0; i<n;i++){

            prefixsum = prefixsum +arr[i];
            remove = prefixsum -target;
            if(prefixsumcount.find(remove)!=prefixsumcount.end()){
                count+=prefixsumcount[remove];
            }
            prefixsumcount[prefixsum]++;
        }
        return count;
    }
};
int main(){
    vector<int>arr = {1,2,3};
    Solution sol;
    int result = sol.prefix(arr,3);
    cout<<result<<endl;
    return 0;

}