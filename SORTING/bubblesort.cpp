#include<bits/stdc++.h>
using namespace std;

void bb(vector<int>&arr){
    int n = arr.size();
    
    for(int i = n-1;i>=1;i--){
        int didswap = 0;

        for(int j =0; j<=i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didswap =1;
        }
    }

    if(didswap==0){
        break;
    }
}
}

int main(){
    vector<int> a;
    a = {13, 46, 24, 52, 20, 9};
    bb(a);
    for (int x : a)
        cout << x << " ";
    return 0;
} 