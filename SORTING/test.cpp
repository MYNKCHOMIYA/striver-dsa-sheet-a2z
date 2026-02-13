#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low] ;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<= pivot && i<= high - 1){
            i++;
        }
        while(arr[j]> pivot && j>= low + 1){
           j--;  
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(vector<int> &arr, int low, int high){
    if(low<high){
        int part = partition(arr,low,high);
        quicksort(arr,low,part-1);
        quicksort(arr,part+1,high);
    }
} 
int main(){
    vector<int> a ={17, 67 ,4 , 30 ,67 ,106,34,6,4,6,32};
    int n  = a.size();
    int low = 0;
    int high = n-1;
    quicksort(a,low,high);
    for (int x : a)
        cout << x << " ";
    return 0;
}