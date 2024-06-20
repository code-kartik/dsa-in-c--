#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int bruteForceSolution(vector<int> arr)
{
    // Time Complexity: O(nlogn + n)
    int sLargest;
    sort(arr.begin(), arr.end());
    int largest = arr[arr.size() - 1];
    for (int i = arr[arr.size() - 2]; i > 0; i--)
    {
        if (arr[i] != largest)
        {
            sLargest = arr[i];
            break;
        }
    }
    return sLargest;
}

int betterSolution(vector<int> arr)
{
    // Time Complexity: O(2n) or O(n)
    int largest = arr[0], sLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > sLargest && arr[i] != largest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}

int main()
{
    vector<int> arr{1, 4, 3, 5, 6, 6, 7, 3, 8};
    cout << "Brute Force: " << bruteForceSolution(arr) << endl;
    cout << "Better Solution: " << betterSolution(arr) << endl;
}