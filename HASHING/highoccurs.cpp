#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 4, 5, 5, 6, 67, 8, 8, 0};

    unordered_map<int, int> mp;

    // Count frequency
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    int maxfreq = INT_MIN;
    int minfreq = INT_MAX;
    int maxele = 0, minele = 0;

    // Traverse map
    for (auto it : mp)
    {
        int element = it.first;
        int count = it.second;

        if (count > maxfreq)
        {
            maxfreq = count;
            maxele = element;
        }

        if (count < minfreq)
        {
            minfreq = count;
            minele = element;
        }
    }

    cout << "The highest frequency element is: " << maxele << endl;
    cout << "The lowest frequency element is: " << minele << endl;

    return 0;
}
