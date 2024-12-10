#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // string str1, str2;
    // cin>>str1>>str2;
    // cout<<str1+str2<<endl;
    // reverse(str1.begin(),str1.end());
    // //  cout<<str1<<endl;
    // //  sort(str2.begin(),str2.end());
    // //  cout<<str2<<endl;
    // //  string str3="abcdefghijk";
    // //  str3.substr(0,5);
    // //  cout<<str3.substr(0,5)<<endl;
    // //  for(int i=0; i<str3.size(); i++)
    // //  {
    // //     for(int j=1; j<str3.size()-i; j++)
    // //     {
    // //         cout<<str3.substr(i,j)<<endl;
    // //     }
    // //  }
    // // cout<<str1.size();
    // // operator overloading
    // // string str4;
    // // str4=to_string(1245);
    // // cout<<str4<<endl;
    // // int x;
    // // x=stoi(str4);
    // // cout<<"integer"<<x<<endl;
    // int n;
    // cin>>n;
    // string str;
    // // cout<<str.size()<<endl;
    // for(int i=1; i<=n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     string temp;
    //     temp=to_string(x);
    //     str=str+temp;
    // }
    // cout<<str;
    string str1="abcdef",str2;
    for(int i=0; i<str1.size(); i++)
        {
            str2[i]=str1[str1.size()-i-1];
        }
    str2;
    
}