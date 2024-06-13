#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int arr[10] = {5, 5, 8, 6, 5, 8, 4, 5, 6};

    for (int i = 0; i < 10; i++)
    {
        ans = ans ^ arr[i]; // XOR operation because XOR return 0 with same number
    }

    cout << ans << endl;

    return 0;
}