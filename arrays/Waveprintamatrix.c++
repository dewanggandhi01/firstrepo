#include <iostream>
#include <vector>
using namespace std;
int Waveprint(vector<vector<int>> a)
{
    int m = a.size();
    int n = a[0].size();
    for (int startcol = 0; startcol < n; startcol++)
    {
        if ((startcol & 1) == 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << a[i][startcol] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << a[i][startcol] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> a{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}};
    Waveprint(a);
    return 0;
}