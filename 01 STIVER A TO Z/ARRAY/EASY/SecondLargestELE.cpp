#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void element(vector<int>arr){
        int max = arr[0];
        int seclar = arr[0];
        for(int i =0; i<=arr.size()-1;i++){
            if(max < arr[i]){
                seclar = max;
                max = arr[i];
                
            }
            else if(max> arr[i] && seclar < arr[i]){
                seclar = arr[i];
            }
        }
         cout<< "largest  element : "<< max <<endl;
          cout<< "seclargest  element : "<< seclar<<endl;
        
    }
};
int main(){
    vector<int> arr = {4,1,7,9,3,8,5,3,2,4,2,342,5,3,2,5,654,2,653,900};
    Solution sol;
    sol.element(arr);
    return 0;
}