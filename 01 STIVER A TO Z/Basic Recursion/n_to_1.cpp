#include<iostream>
using namespace std;


void patt(int end, int count , int start){
    cout<<count<<endl;
    if(count == start){
        return;
    }
    count = count-1;
    patt(end,count,start);
}

int main(){
    int n;
    cout<<"enter number to end the counting to start: "<<endl;
    cin>>n;
    patt(n,n,1);

}