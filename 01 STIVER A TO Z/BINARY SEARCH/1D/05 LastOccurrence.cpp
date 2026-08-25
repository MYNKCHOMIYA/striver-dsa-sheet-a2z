#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int last(vector<int>&arr,int target){
        int low =0; int high = arr.size()-1; int last = -1; 
        while(low<=high){
            int mid = low+((high-low)/2);
            if(arr[mid]==target){
                low = mid+1;
                last =mid;
                
            }
            else if(arr[mid]<target){
                low = mid+1;
                
            }else{
                high = mid-1;
                
            }
        }
        int low1 =0 ;int high2 = arr.size()-1;int first =-1;

            while(low1<=high2){
                int mid = low1+((high2 -low1)/2);
                if(arr[mid]==target){
                    high2 = mid-1;
                    first = mid;
                }else if(arr[mid]<target){
                    low1 = mid+1;
                }else{
                    high2 = mid-1;
                }
            }
        
        cout<<first<<" "<<last<<endl;
            return 0;
    }
};
int main(){
    vector<int>arr = {5,7,7,8,8,10};
    Solution sol;
    cout<<sol.last(arr,8);
    return 0;
}