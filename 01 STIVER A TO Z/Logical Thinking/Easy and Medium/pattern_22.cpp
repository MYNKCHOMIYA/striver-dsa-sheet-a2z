#include<iostream>
using namespace std;


void patt(int n ){
for(int i =0;i<2*n-1;i++){
    for(int j =0; j<2*n-1;j++){
        int top =i;
        int right = j;
        int bottom = (2*n-2) -i;
        int left = (2*n-2)-j;

        int minDist = min(min(top,bottom),min(right,left));

        cout<<(n-minDist)<<" ";
    }
    cout<<endl;
}

}
int main(){
    patt(4);
    return 0;
}