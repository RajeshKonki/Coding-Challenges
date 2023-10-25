#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums{0, 2, 3, 3, 2, 2, 7};
    int n = 5;
    unordered_map<int, bool> m;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        m[nums[i]] = true;
    }
    int x;
    for (int i = 0; i < n; i++)
    {
        x = i + (random() % 10);
        if (m[x])
        {
            cout << x << "true";
        }
        else
        {
            cout << x << "false";
        }
    }
}