#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main()
// {
//     // int x;
//     // cin>>x;
//     vector<vector<int>> v(3,vector<int>(4,10)); 
//     int m=v.size();
//     int n=v[0].size();
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // v.pop_back();
//     // v.push_back(4);
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int myfunction(vector<int>&v)   // & is required here because it will only take the call by refrence 
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v.begin(), v.begin()+5); //sort(v.begin()+3, v.end());
    cout<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(9);
    v.push_back(-5);
    v.push_back(-10);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(34);
    v.push_back(99);
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // sort(v.begin(), v.begin()+5); //sort(v.begin()+3, v.end());
    // cout<<endl;
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // reverse(v.begin(), v.end());
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    myfunction(v);
    int m=1000;
    int n=500;
    cout<<m<<" "<<n;
    cout<<endl;

    swap(m,n);
    cout<<m<<" "<<n<<"\n";

    int x=min(10,11);
    cout<<x<<endl;

    int d=max(34,99);
    cout<<d<<endl;

    return 0;
}
