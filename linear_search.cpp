#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int linearSearch(vector<int> v, int k)
{
    // Time complexity: O(N)
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 0, 11, 2, 3};
    int k;
    cin >> k;

    cout << linearSearch(arr, k) << endl;
}