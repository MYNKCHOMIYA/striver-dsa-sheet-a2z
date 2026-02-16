#include <bits/stdc++.h>
using namespace std;
int rep(int n)
{
    if (n == 0 || n ==1)
    {
        return 1;
    }
    return n * rep(n - 1);
}
int main()
{
    int n;
    cout << "where is start to go on 1 : ";
    cin >> n;
    
  cout<<"factorial of "<<n<<": "<<rep(n);
}