#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int bruteForceSol(vector<int> arr)
{
    // Time Complexity: O(nlogn)
    sort(arr.begin(), arr.end());
    int largest = arr[arr.size() - 1];

    return largest;
}

int optimalSolution(vector<int> arr)
{
    // Time Complexity: O(n)
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    vector<int> arr{1, 5, 8, 6, 4, 7, 8, 6, 3, 4, 0};
    int result1 = bruteForceSol(arr);
    int result2 = optimalSolution(arr);

    cout << "Brute Force Solution: " << result1 << endl;
    cout << "Optimal Solution: " << result2 << endl;
}