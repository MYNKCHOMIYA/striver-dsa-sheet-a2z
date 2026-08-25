#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>highocc(vector<int>&org){
    unordered_map<int,int>occ;
    for(int i : org){
        occ[i]++;
    }
    return occ;
}

int main(){
    vector<int>org = {45,7,8,3,4,5,67,3,5,667,7656,435,22,1,3,3,3,3,3};
    unordered_map<int,int>result=highocc(org);
    int max_freq =0;
    int max_occur_element = org[0];
    for(auto const& [key,value] : result){
        if(value>max_freq){
            max_freq = value;
            max_occur_element = key;
        }
    }
    cout<<endl<<"max occur element "<< max_occur_element<<" max freq "<<max_freq<<endl;
    

    return 0;
    }