#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    // Base condition
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    // Insert nth element at correct position
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main()
{
    vector<int> a = {1, 31, 3, 5, 76, 3, 34, 6, 4, 3, 7845, 43, 32, 3, 5, 7, 5, 7, 5, 34, 5};

    insertionSort(a, a.size());

    for (auto x : a)
        cout << x << " ";
}
