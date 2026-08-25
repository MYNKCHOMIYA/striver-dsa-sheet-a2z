#include<iostream>
#include<cmath>
using namespace std;

//optimal
int Prob(int n){
    return (log10(n)+1);

}

//brute force
// int Prob(int n){
//     int count =0;
//     while(n>0){
//         count++;
//         n = n/10;
//     }
//     return count;
// }

int main(){
    int result = Prob(567894367);
    cout<< result;
    return 0;
}