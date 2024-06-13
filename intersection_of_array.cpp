#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 3}, arr2 = {3, 3, 4, 4};
    vector<int>
        intersectingElement;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            intersectingElement.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
    }

    for (auto i : intersectingElement)
    {
        cout << i << " ";
    }
}