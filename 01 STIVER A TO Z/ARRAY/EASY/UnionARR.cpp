#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    set<int>uni1(vector<int> &arr,vector<int>&arr2){
        set<int>uni;
        for(int i = 0; i<arr.size(); i++){
            uni.insert(arr[i]);
        }
        for(int i =0 ; i<arr2.size();i++){
            uni.insert(arr2[i]);
        }
        return uni;
    }

    vector<int>uni2(vector<int> &arr,vector<int>&arr2){
        map<int,int>uni;
        vector<int>Union;
        for(int i =0 ; i<arr.size(); i++){
            uni[arr[i]]++;
        }
        for(int i =0 ; i<arr2.size(); i++){
            uni[arr2[i]]++;
        }
        for(auto &it: uni){
            Union.push_back(it.first);
        }
        return Union;
    }

    vector<int>uni3(vector<int>&arr,vector<int>&arr2){
        int point1 = 0;
        int point2 = 0;
        vector<int>Union;

        while(point1<arr.size() && point2 < arr2.size()){
            if(arr[point1]<arr2[point2]){
                if(Union.empty() || Union.back()!=arr[point1]){
                Union.push_back(arr[point1]);}
                point1++;
            }
            else if(arr[point1]>arr2[point2]){
                if(Union.empty() || Union.back()!=arr2[point2]){
                Union.push_back(arr2[point2]);}
                point2++;
            }
            else{
                if(Union.empty() || Union.back()!=arr[point1]){
                    Union.push_back(arr[point1]);}
                    point1++;
                    point2++;
                
            }
            
        }
        while(point1<arr.size()){
            if(Union.empty() || Union.back()!=arr[point1]){
                Union.push_back(arr[point1]);}
                point1++;
        }
        while(point2<arr2.size()){
            if(Union.empty() || Union.back()!=arr2[point2]){
                    Union.push_back(arr2[point2]);}
                    point2++;
        }
        return Union;
        }
};   
        
    
int main(){
    vector<int>arr = {1,2,4,5};
    vector<int>arr2 = {4,6,7,8};
    Solution sol;
    cout<<endl;

    set<int>result = sol.uni1(arr,arr2);
    cout<<"result 1 : ";
    for(int i : result){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>result2 = sol.uni2(arr,arr2);
    cout<<"result 2 : ";
    for(int i : result2){
        cout<< i <<" ";
    }
    cout<<endl;

    vector<int>result3 = sol.uni3(arr,arr2);
    cout<<"result 3 : ";
    for(int i : result3){
        cout<< i <<" ";
    }
    cout<<endl;

    return 0;

}