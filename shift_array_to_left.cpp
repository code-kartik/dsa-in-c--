#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    // time complexity: O(N)
    vector<int> arr{1, 2, 3, 4, 5};

    int temp = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = temp;

    for (auto i : arr)
    {
        cout << i << " ";
    }
}