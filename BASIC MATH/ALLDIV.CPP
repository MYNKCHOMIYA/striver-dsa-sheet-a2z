#include<bits/stdc++.h>
using namespace std;

vector<int>div(int n){
    vector<int> arr;
      for(int i =1; i<=sqrt(n);i++){
        if(n % i == 0 ){
           
           arr.push_back(i);
           
           if(i != n/i){
            arr.push_back(n/i); 
           }
        }else{
            continue;
        }
      }
      return arr;
};
int main(){
    int a;
    cout<<"enter a number : " ;
    cin>>a;
    vector<int> result = div(a);
    sort(result.begin(),result.end());
    cout << "all  divisors are : ";
     for (int x : result)
    {
        cout<<x<<' ';
    }
}