#include<bits/stdc++.h>
using namespace std;

bool arms(int n){
   int sum =0;
   int copy = n; 
   int count = 0;
   while (copy != 0){
       count++;
       copy= copy/10;}
       copy = n;
   while (copy != 0)
   {
       int digs = (copy % 10);
       copy = copy / 10;
       sum = sum + pow( digs, count);
   }
   return sum == n ; }


int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    bool result = bool(arms(n));
    cout << "armstron : " << result;
}