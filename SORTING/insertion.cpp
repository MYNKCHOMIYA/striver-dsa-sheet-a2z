#include<bits/stdc++.h>
using namespace std;
void ri(vector<int>&arr,int i,int n)
{
    if(i==n) return ;
    int j =i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;

    }
    ri(arr,i+1,n);
}
 int main(){
    vector<int>a;
    a={4,5,4,43,65,78,6,4,675,6,23,635,643,45,3223,4,3,53,2,35,45,23,43,4656,67,7435,34,5};
    int n = a.size();
    ri(a,0,n);
    for (int x : a)
        cout << x << " ";
    return 0;
 }