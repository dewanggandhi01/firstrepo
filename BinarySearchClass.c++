#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>A, int low, int high, int key)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else
        {
            if(key<A[mid])
            {
                return BinarySearch(A,low,mid-1,key);
            }
            else
            {
                return BinarySearch(A, mid+1,high, key);
            }
        }
    }
    return -1;
}
int main()
{
    int n; 
    cin>>n;
    vector<int>A(n);
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }
    int key;
    cin>>key;
    int ans=BinarySearch(A,0,n-1, key);
    if(ans==-1)
    {
        cout<<"NOT FOUND";
    }
    else{
        cout<<"FOUND";
    }
    return 0;
}