

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    unordered_map<int, int> m;
    int size = nums.size();
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (m.find(nums[i]) != m.end())
            continue;
        else
        {
            int ls = 0, rs = 0;
            if (m.find(nums[i] - 1) != m.end())
            {
                ls = m[nums[i] - 1];
            }
            if (m.find(nums[i] + 1) != m.end())
            {
                rs = m[nums[i] + 1];
            }
            int streak = ls + rs + 1;
            ans = max(ans, streak);
            m[nums[i]] = streak;
            m[nums[i] - ls] = streak;
            m[nums[i] + rs] = streak;
        }
    }
    return ans;
}
