#include<bits/stdc++.h>
using namespace std;

int qs(vector<int> &arr,int low,int high)
{
    int pivot = arr[low];
    int i =low;
    int j =high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1 ){
            j--;
        }

            if(i<j){
                swap(arr[i],arr[j]);
            }
            
        }
        swap(arr[low],arr[j]);
        return j;
    }


void quicksort(vector<int>&arr,int low,int high){
    if (low < high)
    {
        int part = qs(arr, low, high);

        quicksort(arr, low, part - 1);
        quicksort(arr, part + 1, high);
    }
}

int main()
{
    vector<int> a;
    a = {13, 46, 24, 52, 20, 9};
    quicksort(a,0,a.size()-1);
    for (int x : a)
        cout << x << " ";
    return 0;
}