#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int element(vector<int>arr){
        int max = arr[0];
        for(int i =0; i<=arr.size()-1;i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return max;
    }
};
int main(){
    vector<int> arr = {4,1,7,9,3,8,5,3,2,4,2,342,5,3,2,5,654,2};
    Solution sol;
    int result = sol.element(arr);
    cout<< "largest element : "<< result <<endl;
    return 0;
}