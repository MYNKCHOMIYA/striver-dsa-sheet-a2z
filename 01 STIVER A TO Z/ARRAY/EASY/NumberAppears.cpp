#include<bits/stdc++.h>
using namespace std;

class  Solution{
    public:
    int appear(vector<int>&arr){
        int xor1 = 0 ; 
        for(int i =0 ; i<arr.size(); i++){
            xor1=xor1^arr[i];
            
        }
        return xor1;
    }

    int occurs(vector<int>&arr){
        int count = 0;
        for(int i =0 ; i<arr.size(); i++){
            for(int j =0 ; j<arr.size() ; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count ==1){ return arr[i];}
            else{count = 0;}
        }
        return 0;
    }

    int hashOcc(vector<int>&arr){
        int maxi =0;
        for(int i : arr){
            if(maxi<i){
                maxi = i;
            }
        }

        vector<int>occ(maxi+1,0);
        for(int i =0 ; i< arr.size(); i++){
            occ[arr[i]]++;
        }
        for(int i =0 ; i< arr.size(); i++){
            if(occ[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }
};

int main(){
    vector<int>arr = { 7,4,1,2,7,8,1,2,4,6,6,8 };
    Solution sol;

    int result = sol.appear(arr);
    cout<<"result 1 : "<<result<<endl;
    

    int result2 = sol.occurs(arr);
    cout<<"result 2 : "<<result2<<endl;

    int result3 = sol.hashOcc(arr);
    cout<<"result 3 : "<<result3<<endl;
    return 0;
}