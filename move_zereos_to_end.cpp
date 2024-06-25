#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// move zeroes to end
vector<int> bruteForceSolution(vector<int> v)
{
    // Time Complexity: O(2N)
    vector<int> temp;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            temp.push_back(v[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        v[i] = temp[i];
    }

    for (int i = temp.size(); i < v.size(); i++)
    {
        v[i] = 0;
    }

    return v;
}

vector<int> optimalSolution(vector<int> v)
{
    // Time complexity: O(N)
    int j = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        return v;
    }

    for (int i = j + 1; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[j]);
            j++;
        }
    }

    return v;
}

int main()
{
    vector<int> arr{
        1,
        2,
        0,
        5,
        0,
    };

    vector<int> result1 = bruteForceSolution(arr);
    vector<int> result2 = optimalSolution(arr);
    cout << "Brute Force Solution: ";
    for (auto i : result1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Optimal Solution: ";
    for (auto i : result2)
    {
        cout << i << " ";
    }
}