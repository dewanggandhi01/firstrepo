#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> a;
    a.push_back({1, 2, 3, 4});
    a.push_back({5, 4, 2, 32});
    a.push_back({9, 8, 7, 5, 3, 2, 4, 5, 334});
    for (int i = 0; i != a.size(); i++)
    {
        for (auto it=a[i].begin(); it !=a[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}