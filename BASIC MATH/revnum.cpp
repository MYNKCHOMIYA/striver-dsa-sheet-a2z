#include<bits/stdc++.h>
using namespace std;
int rev(int n){
            int revs = 0;
            while (n != 0)
            {
                int lastdig = n % 10;
                revs = revs * 10 + lastdig;
                n = n/10;
            }
            return revs;
        
    };
int main(){
    int n ; 
    cout<<"enter number : ";
    cin>>n;
    int result = rev(n);
   cout<<"the reverse number "<< result;

}