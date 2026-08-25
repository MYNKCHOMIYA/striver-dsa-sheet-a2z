#include<bits/stdc++.h>
using namespace std;

class Armstrongchecker{
    public :
        static bool isArmstrong(int num){
            int k = to_string(num).length();
            int sum =0 ;
            int n = num;
            while(n>0){
                int ld = n %10;
                int sum = sum + pow(ld,k);
                n /=10;


            }
            return sum = num; 
        }
};

int main(){
    int number = 153;
    if(Armstrongchecker :: isArmstrong(number)){
        cout<<number <<" is armstrong ";
    }
    else {cout<<number << " is not armstrong";}

    return 0;
}