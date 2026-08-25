#include<bits/stdc++.h>
using namespace std;

class Divs{
    public:
        vector<int>arr(int n){
            vector<int>res;
            for(int i =1; i<=n; i++){
                if(n%i == 0){
                    res.push_back(i);
                }
            }
            return res;
        }
};

class Div{
    public:
        vector<int> arr2(int n){
            int sqn = sqrt(n);
            vector<int>ans;
            for(int i = 1; i<=sqn ; i++){
                if(n%i ==0){
                    ans.push_back(i);

                    if(i != n/i){
                    ans.push_back(n/i);
                    }
                }
            }
            sort(ans.begin(),ans.end());

            return ans;
        }
};

int main(){
    Divs d;
    int   N =136;
    vector<int> result = d.arr(N);
    cout<<"brute force :";
    for(int i : result){
        cout <<i <<" ";
    }cout<<endl;

    Div div;
    vector<int> result2 = div.arr2(N);
    cout<<"optimal sol : ";
    for(int i : result2){
        cout<< i << " ";
    }cout<<endl;

    return 0;
}