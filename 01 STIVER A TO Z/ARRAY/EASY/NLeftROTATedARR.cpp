#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int>rotated(vector<int>&arr,int k){
        int n = arr.size();
        k  = k % n ;
        vector<int>temp;
        for(int i=0; i<n;i++){
            temp.push_back(arr[i]);
        }
        for(int i = 0 ; i< k ; i++){
            arr[i] = temp[n-k+i];
        }
        int j =0;
        for(int i = k; i<n; i++){
            arr[i] = temp[j];
            j++;
        }
        return arr;

    }

    void reversearr(vector<int>&arr,int start , int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;end--;
        }
    }

    vector<int>arrmethod(vector<int>&arr,string str , int target){
        int n = arr.size();

        if(n == 0 || target == 0 ){ return arr;}
        target = target %n;
        
        if(str == "right"){
            reversearr(arr,0,n-1);
            reversearr(arr,0,target-1);
            reversearr(arr,target,n-1);
        }
        if(str == "left"){
            reversearr(arr,0,target-1);
            reversearr(arr,target,n-1);
            reversearr(arr,0,n-1);
            
        }
        return arr;
    }

};
int main(){
    vector<int>arr = {1,2,3,4,5,7};
    vector<int>arr2 = {1,2,3,4,5,7};
    Solution sol;
    vector<int>result = sol.rotated(arr,2);
    for(int i : result){
        cout<< i << " ";
    }
    cout<<endl;
    cout<<"second method is : ";
    vector<int>result2 = sol.arrmethod(arr2,"left",2);
    for(int i : result2){
        cout<< i << " ";

    }
    cout<<endl;
    return 0;
}