#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>&arr,int start , int end){
    if(start>=end){
        return;
    }

    swap(arr[start],arr[end]);
     rev(arr,start+1,end-1);

     

}
int main(){ int n;
 vector<int> arr(n);

 cout<<"enter the size of arr";
 cin>>n;
 for(int i =0; i<= n-1;i++){
 cin>>arr[i];
}
 int start = 0;
 int end = n-1;
 rev(arr,start,end);

 cout << "Reversed array:\n";
 for (int i = 0; i < n; i++)
 {
     cout << arr[i] << " ";
 }
}
