#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>>summm(vector<int>&arr){
        set<vector<int>>result;
        vector<vector<int>>re;
        sort(arr.begin(),arr.end());
        for(int i =0; i<arr.size(); i++){
            for(int j =i+1; j<arr.size(); j++){
                for(int k = j+1; k<arr.size(); k++){
                    if(arr[i]+arr[j]+arr[k]==0 ){
                        result.insert({arr[i],arr[j],arr[k]});
                    }
                }
            }
        }

        for(auto it: result){
            re.push_back(it);
        }
        return re;
    }
    void m2sum(vector<int>&arr){
        cout<<"method two ans : \n";
        set<vector<int>> result;
        int n = arr.size();
        for(int i =0; i<n; i++){
            set<int>seen;
            for(int j = i+1; j<n ; j++){
                int third = -(arr[i]+arr[j]);
                if(seen.find(third)!=seen.end()){
                    vector<int>temp = {arr[i],third,arr[j]};
                    result.insert(temp);
                }
                seen.insert(arr[j]);
            }
        }
        for(auto it : result){
            for(int num : it){
                cout<<num<<" ";
            }
            cout<<endl;
        }
    }

    void m3sum(vector<int>&arr){
        cout<<"method 3rd ans :  \n";
        sort(arr.begin(),arr.end());
        vector<vector<int>>result;
        int n = arr.size();

        for(int i = 0; i < n ; i++){

            if(i > 0 && arr[i]== arr[i-1]){
                continue;
            }

            int left = i+1; int right = n-1;
            while(left<right){
                int sum = arr[left] + arr[right] +arr[i];
            
                if(sum==0){
                    result.push_back({arr[i],arr[left],arr[right]});
                    left++; right--;

                    while(left<right && arr[left] == arr[left-1]){
                        left++;
                    }
                    while(right>left && arr[right]==arr[right+1]){
                        right--;
                    }
                }else if(sum>0){
                    right--;
                }else{
                    left++;
                }
            }
        }

        for(auto  it :result){
            for(int num : it){
                cout<<num<<" ";
            }
            cout<<"\n";
        }
    }
};
int main(){
    vector<int>arr = {-1,0,1,2,-1,-4};
    Solution sol;
    
    vector<vector<int>>result = sol.summm(arr);

    for(auto it : result){
        for(int num : it ){
            cout<<num<<" ";
        }
        cout<<"\n";
    }

    sol.m2sum(arr);
    sol.m3sum(arr);
    return 0;
}
