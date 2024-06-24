#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> shiftToLeftByKPlaces(vector<int> v, int k)
{

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

int main()
{
    // time complexity: O(N)
    vector<int> arr{1, 2, 3, 4, 5};

    vector<int> result = shiftToLeftByKPlaces(arr, 3);

    for (auto i : result)
    {
        cout << i << " ";
    }
}