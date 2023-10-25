#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> num{2, 3, 5, 6, 10, 4};
    int sum = 8;
    unordered_map<int, int> m;
    for (int i = 0; i < num.size(); i++)
    {
        if (m.find(sum - num[i]) != m.end())
        {
            cout << num[i] << " " << sum - num[i] << endl;
        }
        m[num[i]]++;
    }
    return 0;
}