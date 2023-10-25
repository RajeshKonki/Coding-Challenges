#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t;
    int n;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        unordered_map<int, int> m;
        int minElement = INT_MAX;
        bool res = true;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            m[temp] = 1;
            minElement = min(minElement, temp);
        }
        for (int j = minElement; j < minElement + n; j++)
        {
            if (m.find(j) == m.end())
            {
                res = false;
                break;
            }
        }
        if (res)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}