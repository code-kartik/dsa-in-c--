#include <iostream>
#include <vector>
#include <limits.h>
#include <unordered_set>
using namespace std;

unordered_set<int> bruteForceSolution(vector<int> arr)
{
    // Time Complexity: O(nlogn)
    unordered_set<int> set;

    for (int i = 0; i < arr.size(); i++)
    {
        set.insert(arr[i]);
    }
    return set;
}

vector<int> optimalSolution(vector<int> v)
{
    // time complexity: O(n)
    vector<int> newArr;
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] != v[i])
        {
            newArr.push_back(v[i + 1]);
            v[i + 1] = v[j];
            i++;
        }
    }
    return newArr;
}

int main()
{
    vector<int> arr{1, 4, 3, 5, 6, 6, 7, 3, 8};

    unordered_set<int> result1 = bruteForceSolution(arr);
    vector<int> result2 = optimalSolution(arr);

    cout << "Brute Force: ";
    for (auto it : result1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Optimal Solution: ";
    for (int i = 0; i < result2.size(); i++)
    {
        cout << result2[i] << " ";
    }
}