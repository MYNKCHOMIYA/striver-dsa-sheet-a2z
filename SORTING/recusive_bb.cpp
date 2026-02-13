#include<bits/stdc++.h>
using namespace std;
void bb(vector<int>& arr,int n) {
    if(n==1) return ;
    int didswap = 0;
    for(int j =0; j<= n-2;j++){
        
        if(arr[j] >= arr[j+1]){
            swap(arr[j],arr[j+1]);
            int didswap = 1;
        }
        
    }
    if(didswap = 0){
        return ;
    }
    bb(arr,n-1);
}
int main(){
    vector<int>a;
    a ={1,48,4556,832,865,2,6,4,6,43,6};
    int n = a.size();
    bb(a,n);
    for (int x : a)
        cout << x << " ";
    return 0;
}