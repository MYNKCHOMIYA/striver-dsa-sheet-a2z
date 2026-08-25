#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>>permu(vector<int>&arr){
        int n = arr.size();
        vector<int>freq(n,0);
        vector<vector<int>>ans;
        vector<int>ds;
        repermu(arr,freq,ans,ds);
        return ans;

    }
    void repermu(vector<int>&arr,vector<int>&freq,vector<vector<int>>&ans,vector<int>&ds){
        
        if(ds.size()==arr.size()){
            ans.push_back(ds);
            return;
        }

        for(int i =0; i<arr.size() ; i++){
            if(freq[i]==0){
                ds.push_back(arr[i]);
                freq[i] =1;
                repermu(arr,freq,ans,ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
};

class Solution2{
    public:
    vector<vector<int>>perm(vector<int>&arr){
        vector<vector<int>>ans;

        repermuation(ans,arr,0);
        return ans;
    }
    void repermuation(vector<vector<int>>&ans,vector<int>&arr,int index){
        int n = arr.size();
        if(index ==n){
            ans.push_back(arr);
            return;
        }
        for(int i = index; i<n ; i++){
            swap(arr[i],arr[index]);
            repermuation(ans,arr,index+1);
            swap(arr[i],arr[index]);
        }
    }
};

class Striver{
    public:
    vector<int>next(vector<int>&arr){
        int ind = -1;
        int n = arr.size();
        for(int i = n-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(arr.begin(),arr.end());
            return arr;
        }

        for(int i = n-1; i>ind ; i--){
            if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;}
        }

        reverse(arr.begin()+ind+1,arr.end());
        return arr;
    }
};
int main(){
    vector<int>arr ={3,1,2};
    // Solution sol;
    // Solution2 sol2;
    Striver st;
    // vector<vector<int>>result = sol.permu(arr); 
    // for(const vector<int>&nums : result){
    //     for(int row:nums){
    //     cout<<row<<" ";}
    //     cout<<"\n";
    // }
    // cout<<endl;
    // cout<<"result 2: "<<endl;

    // vector<vector<int>>result2 = sol2.perm(arr);
    // for(const vector<int>&nums:result2){
    //     for(int row:nums){
    //         cout<<row<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<endl;
    
    
    cout<<endl<<"result 4 by the optimal approach : ";
    vector<int>result4 = st.next(arr);
    for(int i : result4){
        cout<<i<<" ";
    }
    // cout<<"better approach sol: " ;

    // next_permutation(arr.begin(),arr.end());
    // for(int i :arr){
    //     cout<<i<<" ";
    //     }

   
    return 0;
}