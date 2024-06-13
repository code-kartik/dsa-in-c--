#include <iostream>
using namespace std;

void traverseArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 5, 8, 6, 3, 4, 8, 9, 3, 4};

    for (int i = 0; i < 10; i += 2)
    {
        if (i + 1 < 10)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    traverseArray(arr, 10);
}