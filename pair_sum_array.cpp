#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 8, 6, 9, 7, 4, 2, 3, 6, 5};

    vector<vector<int>> result;

    int sum;
    cin >> sum;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == sum)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);

                result.push_back(temp);
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            cout << result[i][j] << endl;
        }
    }
    return 0;
}