#include<bits/stdc++.h>
using namespace std;
int fabo(int n){
    int sum =0;
    if(n<=1){return n;}
    int last = fabo(n-1);
    int slast = fabo(n-2);
    return slast+last;

}

int main(){
    int n;
    cout<<"enter a number to fibonacci series ";
    cin>>n;
   for(int i = 0; i<=n;i++){
    cout<<fabo(i)<<" ";

   }
   return 0;
}