#include<bits/stdc++.h>
using namespace std;

string revstring(string n,int start,int end){
        if(start>end){
            return n;
        }
        swap(n[start],n[end]);
        start =start+1 ;
        end = end-1 ;
        return revstring(n,start,end);
}

bool palindrom(string n, int i){
    int size = n.size()-1;
    if(i>=n.size()/2){return true;}
    if(n[i]!=n[size-i]){return false;}
    return palindrom(n,i+1);

}

int main(){
    string n;
    cout<<endl<<"enter a string to check the palindrom or not : "<<endl;
    cin>>n;
    int size = n.size()-1;
    string result  = revstring(n,0,size);
    if(n == result){
        cout<<"string is palindrom"<<endl;
    }
    else{
        cout<<"string is not palindrom"<<endl;
    }
    if(palindrom (n,0)){
        cout<<"string is palindrom by m2"<<endl;
    }
    else{
        cout<<"string is not palindrom by m2"<<endl;
    }
    return 0;
}