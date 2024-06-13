#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 1, 2, 3, 4, 2};
    unordered_map<int, int> countItemsInArray;

    for (int i = 0; i < arr.size(); i++)
    {
        countItemsInArray[arr[i]]++; // increase count in map if duplicates exist
    }

    for (auto i : countItemsInArray)
    {
        if (i.second > 1) // if occurence of a number is greater than 1, print the number
        {
            cout << i.first << endl;
        }
    }
}