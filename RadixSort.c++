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
void RadixSort(vector<int>& A, int d)
{
    for(int i=1; i<d; i++)
    {
        CountingSort(A, A.size(), i);
    }
}
int main()
{
    vector<int>A={374,100,270,609,911,153,503,257};
    int n=A.size();
    RadixSort(A,n);
    for(int i:A){
        cout<<i<<" ";
    }
    return 0;
}