#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums{2, 1, 4, -3, -1, 0};
    int size = nums.size();
    int prefSum = 0;
    int target = 3;
    int count = 0;
    unordered_map<int, int> m;
    m.insert({0, 1});
    int maxElement = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        prefSum += nums[i];
        if (m.find(prefSum - target) != m.end())
        {
            count += m[prefSum - target];
            cout << i << " " << m[prefSum] << endl;
            maxElement = max(maxElement, i - m[prefSum - target]);
        }
        if (m.find(prefSum) == m.end())
        {
            m.insert({prefSum, i});
        }
    }

    cout << "Max:" << maxElement << "Count:" << count;

    return 0;
}