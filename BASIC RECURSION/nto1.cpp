#include<bits/stdc++.h>
using namespace std;
 void rep(int n,int last){
    if(n>=last){
        cout<<n<<"\n";
       rep(n-1,last) ;
    }

 }
int main(){
 int n;
 cout<<"where is start to go on 1 : ";
 cin>>n;
 rep(n,1);
}