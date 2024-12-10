#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> CountingSort(vector<int>& A, int n, int k)
{
    vector<int>C(k+1,0);
    vector<int>B(n);
    for(int i=0; i<n; i++)
    {
        C[A[i]]=C[A[i]]+1;
    }
    for(int i=1; i<=k; i++)
    {
        C[i]=C[i]+C[i-1];
    }
    for(int j=n-1; j>=0; j--)
    {
        B[C[A[j]]-1]=A[j];
        C[A[j]]--;
    }
    return B;
}
int main()
{
    vector<int>A={0,2,4,2,4,6,4,3,1,5,7};
    int n=A.size();
    vector<int> ans=CountingSort(A,n,7);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}