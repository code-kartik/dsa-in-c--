#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

// Brute Force
vector<int> shiftToLeftByKPlacesBrute(vector<int> v, int k)
{
    // Time Complexity: O(n+k)
    k = k % v.size();

    vector<int> temp;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(v[i]);
    }

    for (int i = k; i < v.size(); i++)
    {
        v[i - k] = v[i];
    }

    for (int i = v.size() - k; i < v.size(); i++)
    {
        v[i] = temp[i - (v.size() - k)];
    }

    return v;
}

// Optimal Solution
vector<int> shiftToLeftByKPlacesOptimal(vector<int> v, int k)
{
    // Time Complexity: O(2N)
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    return v;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};

    vector<int> result1 = shiftToLeftByKPlacesBrute(arr, 3);
    vector<int> result2 = shiftToLeftByKPlacesOptimal(arr, 3);

    cout << "Brute Force: ";
    for (auto i : result1)
    {
        cout << i << " ";
    }

    cout << "Optimal Solution: ";
    for (auto i : result2)
    {
        cout << i << " ";
    }
}