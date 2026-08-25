#include<bits/stdc++.h>
using namespace std;

vector<int>result(vector<int>&arr){
    int n = arr.size();
    vector<int>result;
    int cnt1 =0; int cnt2 =0; int ele1 = INT_MIN; 
    int ele2 = INT_MIN;
 
    for(int i =0; i<n ; i++){
        if(cnt1 ==0 && ele2 != arr[i]){
            cnt1 = 1;
            ele1 = arr[i];
        }
        else if(cnt2 ==0 && ele1 != arr[i]){
            cnt2 = 1;
            ele2 = arr[i];
        }else if(ele1 == arr[i]){
            cnt1 ++;
        }else if(ele2 == arr[i]){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1 =0; cnt2 =0;
    for(int i =0; i<n ; i++){
        if(ele1 == arr[i]){
            cnt1++;
        }
        else if(ele2 == arr[i]){
            cnt2++;
        }
    }
    int mini = n/3+1;
    if(cnt1>= mini){
        result.push_back(ele1);
    }else if(cnt2 >= mini){
        result.push_back(ele2);
    }
    return result;
}

int main(){
    vector<int>arr = { 3,5,7,3,7,9,3,7,3,3,3,3};
    for(int num:result(arr)){
        cout<<"majority numbers : " <<num <<" ";
    }
    return 0;
}