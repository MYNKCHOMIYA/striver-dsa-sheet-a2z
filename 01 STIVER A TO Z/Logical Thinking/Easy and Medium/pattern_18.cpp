#include<iostream>
using namespace std;

void patt(int n ){
    int count = n -1;
    for(int i =1; i<=n;i++){
        for(char ch = ('A'+n)-i;ch<=('A'+n-1);ch++){
            cout<<ch<<"";
           
        }
        cout<<endl;
    }

}

int main(){
    patt(5);
}