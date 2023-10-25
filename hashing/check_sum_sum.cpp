#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    // your code goes here
    int t;
    long long int n;
    vector<long long int> nums;
    unordered_map<int, int> m;
    long long int prefSum = 0;
    for (int i = 0; i < t; i++)
    {
        bool isAvail = false;
        for (int j = 0; j < n; j++)
        {
            long long temp;
            cin >> temp;
            prefSum += temp;
            if (m.find(prefSum) != m.end())
            {
                isAvail = true;
                break;
            }
            m[prefSum] = 1;
        }
        if (isAvail)
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