#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int occ(vector<int>&arr,int target){
        int low = 0;
        int high = arr.size()-1;
        int first = -1;
        int last = -1;
        while(low<=high){
            int mid = low+((high -low)/2);

            if(arr[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if(first ==-1){
            return 0;
        }
        low = 0;
        high = arr.size()-1;

        while(low<=high){
            int mid = low+((high-low)/2);

            if(arr[mid]==target){
                last = mid;
                low = mid+1;
            }else if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        cout<<first<<" " <<last<<endl;
        
        return (last-first+1);
    }
};
int main(){
    vector<int>arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    Solution sol;
    cout<<sol.occ(arr,2);
    return 0;

}