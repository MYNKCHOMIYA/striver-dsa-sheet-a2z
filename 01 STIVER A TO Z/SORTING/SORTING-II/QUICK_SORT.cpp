#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>quicksort(vector<int>&arr,int low,int high){
        if(low<high){
            int pivot = partition(arr,low,high);
            quicksort(arr,low,pivot-1);
            quicksort(arr,pivot+1,high);

        }
        return arr;
    }
    int partition(vector<int>&arr,int low,int high){
        int pivotValue = arr[low];
        int  i = low;
        int j = high;

        while(i<j ){

            while(i<=high && pivotValue>=arr[i]){ 
                i++;
            }

            while(j>=low && pivotValue<arr[j] ){
                    j--;
            }
           if(i<j){ swap(arr[i],arr[j]);}
            
        }
        swap(arr[low],arr[j]);
        return j;
    }
};
int main(){
    vector<int> arr = {4,1,7,9,3,8,5,3,2,4,2,342,5,3,2,5,654,2};
    int n = arr.size()-1;
    int mid = n /2;
    Solution sol;
    vector<int>result = sol.quicksort(arr,0,n);
    for(int i : result){
        cout<<i << " ";
    }
    return 0;
}