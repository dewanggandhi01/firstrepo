#include<iostream>
using namespace std;
int TOH(int N, char S, char M, char D)
{
    if(N==1)
    {
        cout<<S<<"-->"<<D;
        cout<<endl;
    }
    else
    {
        TOH(N-1, S, D, M);
        cout<<S<<"-->"<<D;
        cout<<endl;
        TOH(N-1, M, S, D);
    }
}
int main()
{
    int N,x;
    cin>>N;
    x=TOH(4,'S','M','D');
    return 0;
}