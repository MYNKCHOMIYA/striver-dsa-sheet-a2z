#include <bits/stdc++.h>
using namespace std;
int rep(int n)
{
    if(n==0){ return 0;}
    return n + rep(n-1);
    

    
}
int main()
{
    int n;
    cout << "where is start to go on 1 : ";
    cin >> n;
    cout<<rep(n);
}