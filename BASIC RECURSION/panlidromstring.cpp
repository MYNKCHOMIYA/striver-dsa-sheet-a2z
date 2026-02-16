#include<bits/stdc++.h>
using namespace std;
bool str(string s,int start,int end){
    if(start>=end/2){
        return true;}
    if(s[start]!=s[end-start]){
        return false;
    }return str(s,start+1,end);

}
int main(){
    string s;
    
    cout<<"enter a string : ";
    cin>>s;
    int n = s.length();
    if(str(s,0,n-1)){
        cout<<"palindrom string";
    }
    else{cout<<" not palindrom string";}
    
}