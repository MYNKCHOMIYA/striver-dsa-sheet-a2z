#include <bits/stdc++.h>
using namespace std;

void freq(vector<int> &arr)
{
    int hash[33] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
cout<<"enter how many number of frequency u want to see :";
    int q;
    cin >> q;

    while (q--)
    {
        int number;
        cout<<"enter "<<q<<"th number : ";
        cin >> number;

        if (number >= 0 && number < 33){
         
            cout <<"number : "<<number<<" : "<<"frequency : "<< hash[number] << endl;}
        else{
            cout << "Out of range\n";}
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 4, 2, 5, 32};
    freq(arr);
}
