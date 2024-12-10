// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// static bool cmp(int x, int y)
// {
//     if (x > y)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(7);
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(6);
//     sort(v.begin(), v.end(), cmp);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// static bool cmp(int x, int y)
// {
//     if(x%2!=0 && y%2!=0)
//     {
//         return x>y;
//     }
//     if(x%2==0 && y%2==0)
//     {
//         return x<y;
//     }
//     if(x%2!=0 && y%2==0)
//     {
//         return true;
//     }
//     if(x%2==0 && y%2!=0)
//     {
//         return false;
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(7);
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(6);
//     sort(v.begin(), v.end(), cmp);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout <<  v[i] ;
//     }
//     cout<<endl;
// }




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static bool cmp(pair<int,int> x, pair<int,int> y)
{
     if(x.second > y.second)
     {
        return false;
     }
     else
     {
        return true;
     }
}
int main()
{
    vector<pair<int,int>>v;
    v.push_back({10,-2});
    v.push_back({5,-4});
    v.push_back({3,10});
    v.push_back({1,-7});
    v.push_back({20,-15});

    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first <<","<<v[i].second <<endl;
    }
    cout<<endl;
}