#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void Spi(vector<vector<int>>&matrix){
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
        int bottom = colsize-1;
        int right = rowsize-1;
        int top =0;
        int left =0;


        vector<int>visited;

        while(top<=bottom && left<=right){
            for(int i = left; i<= right; i++ ){
                visited.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i<=bottom; i++ ){
                visited.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i =right; i>=left ; i-- ){
                    visited.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    visited.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        for(int i =0; i<visited.size(); i++){
            cout<<visited[i]<<" ";
        }
            cout<<endl;
        }
};
int main(){
    vector<vector<int>>matrix = {{ 1, 2, 3, 4 },{ 5, 6, 7, 8 },{  9, 10, 11, 12 },{ 13, 14, 15, 16 }};

    Solution sol;
    sol.Spi(matrix);

    return 0;
}