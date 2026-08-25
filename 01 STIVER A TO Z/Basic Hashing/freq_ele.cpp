#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>freq(vector<int>&norm){
    unordered_map<int,int>freqmap;
    
    for(int i : norm ){
        freqmap[i]++;
    }
    return freqmap;
}

int main(){
    vector<int>norm ={45,78,3,3,4,4,23,32,45,5,312,123,324,433,123,3};
    unordered_map<int,int>result=freq(norm);
    for(auto const& [key,value] : result){
        cout<<key<<" : "<<value<<endl;
    }
    return 0;

}