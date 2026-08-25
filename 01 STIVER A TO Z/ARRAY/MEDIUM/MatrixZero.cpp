#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void zeromatrix(vector<vector<int>>&matrix){
        int row = matrix.size();
        int cols = matrix[0].size();
        vector<bool>dummyRow(row,false);
        vector<bool>dummyCol(cols,false);

       for(int i =0; i< matrix.size(); i++){
        for(int j =0;j<matrix[0].size();j++){
            if(matrix[i][j] == 0){
                dummyRow[i]= true;
                dummyCol[j] = true;
            }
        }

       }
       for(int i =0; i<row; i++){
        for(int j =0; j<cols; j++){
            if(dummyRow[i]||dummyCol[j]){
                matrix[i][j]=0;
            }                                                                                        
        }
       }
        
    }
    void setzero(vector<vector<int>>&matrix){
        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        bool firstrow = false;
        bool firstcol = false;

        for(int i =0; i<colsize; i++){
            if(matrix[0][i]==0){
                firstrow = true;
                break;
            }
        }

        for(int i =0; i<rowsize; i++){
            if(matrix[i][0]==0){
                firstcol = true;
                break;
            }
        }

        for(int i =1; i<rowsize; i++){
            for(int j =1; j<colsize; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;

                }
            }
        }

        for(int i =1; i<rowsize; i++){
            for(int j =1; j<colsize; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(firstrow){
            for(int i =0; i<colsize; i++){
                matrix[0][i]=0;
            }
        }

        if(firstcol){
            for(int i =0; i<rowsize; i++){
                matrix[i][0]=0;
            }
        }

        cout<<endl;
        cout<<"row size n = "<<rowsize<<endl;
        cout<<"col size m = "<<colsize<<endl;
        cout<<"fisrtcol: "<<boolalpha<<(firstcol)<<endl;
        cout<<"fisrtcol: "<<boolalpha<<firstrow<<endl;

    }
};
int main(){
    vector<vector<int>>matrix = {{1,1,1,1},{0,1,1,1},{1,1,1,1}};
    Solution sol;
    // sol.zeromatrix(matrix);

    // for(const vector<int>i : matrix){
    //     for(int j:i ){
    //         cout<<j<<",";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    sol.setzero(matrix);
    cout<<"matrix2: "<<endl;;
    for(const vector<int>i : matrix){
        for(int j:i ){
            cout<<j<<",";
        }
        cout<<endl;
    }


    return 0;

}