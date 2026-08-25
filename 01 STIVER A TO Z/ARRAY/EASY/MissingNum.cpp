#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
//O(N log N) Time | O(1) Space
    void Misarr(vector<int>&arr){
        int max =0;
        //O(N)
        for(int i : arr){
            if(max<i){
                max = i;
            }
        }
        //O(NlogN)
        sort(arr.begin(),arr.end());
        int count = arr[0];
        int i =0;
        //O(M)
        cout<<endl<<"missing values: ";
        while(i<arr.size()){
            if(arr[i]==count){
                count++;
                i++;
            }
            else{
                cout<<count<<" ";;
                count++;
            }
        }
        cout<<endl;
    }
//O(N + K) Time | O(K) Space (Risky if max is huge)
    void MisHash(vector<int>&arr){
        
        int max =0;

        for(int i : arr){
            if(max < i){
                max = i;
            }
        }
         
        vector<int>hash(max+1,0);
        cout<<"missing values: ";
        for(int i =0;i< arr.size(); i++){
            hash[arr[i]]++;
        }

        for(int i =0; i<hash.size(); i++){
            if(hash[i]==0 ){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
//O(N + K) Time | O(N) Space (Most Balanced & Optimal)
    void Mis(vector<int>&arr){
        int max =0; 
        if(arr.empty()) return;

        for(int i : arr){
            if(max<i) {
                max = i; 
            }
        }
        unordered_set<int>check(arr.begin(),arr.end());
        cout<<"missing values: ";
        for(int i = 1 ; i<= max ; i++){
            if(check.find(i)==check.end()){
                cout<< i <<" ";
            }
        }
    }
//O(N) Time | O(1) Space
    int MisOne(vector<int>&arr){
        int xor1 =0;
        int xor2 =0;
        for(int i = 0; i<arr.size(); i++){
           xor1=  arr[i]^xor1;
        }

        for(int i = 1; i<=arr.size()+1; i++){
            xor2 = xor2^i;
        }

        return xor1^xor2;
    }
    
    

};
int main(){
    vector<int>arr = {1,2,3,5};
    Solution sol;

    // Method 1: Sorting -> O(N log N) Time | O(1) Space
    sol.Misarr(arr);

     // Method 2: Vector Hashing -> O(N + K) Time | O(K) Space (Risky if max is huge)
    sol.MisHash(arr);

    // Method 3: Unordered Set -> O(N + K) Time | O(N) Space (Most Balanced & Optimal)
    sol.Mis(arr);

    // Method 4: XOR for ONE missing value -> O(N) Time | O(1) Space
    int result = sol.MisOne(arr);
    cout<<endl<<"missing values: ";
    cout<<result<<endl;

    return 0;
}