// QUICK SORT
#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
int Partition(vector<int>& A, int low, int high)
{
    int pivot=A[low];
    int i=low;
    int j=high+1;
    do
    {
        do
        {
            i++;
        } while (A[i]<pivot);

        do
        {
            j--;
        } while (A[j]>pivot);

        if(i<j)
        {
            swap(A[i], A[j]);
        }
        
    } while (i<j);

    swap(A[low],A[j]);
    return j;
}

void QuickSort(vector<int>& A, int low, int high)
{
    if(low<high)
    {
        int j=Partition(A, low, high);
        QuickSort(A, low, j-1);
        QuickSort(A, j+1, high);
    }

}

void Traverse(vector<int>& A)
{
    for(int i=0; i<A.size()-1; i++)  
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n;
    cin >> n;
    vector<int> A(n+1);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    A[n]=INT_MAX;
    QuickSort(A, 0, n - 1);
    Traverse(A);
    return 0;
}








// MEDIAN QUICK SORT
#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
int Partition(vector<int>& A, int low, int high)
{
    int mid=(low+high)/2;
    swap(A[low],A[mid]);
    int pivot=A[low];
    int i=low;
    int j=high+1;
    do
    {
        do
        {
            i++;
        } while (A[i]<pivot);

        do
        {
            j--;
        } while (A[j]>pivot);

        if(i<j)
        {
            swap(A[i], A[j]);
        }
        
    } while (i<j);

    swap(A[low],A[j]);
    return j;
}

void MedianQuickSort(vector<int>& A, int low, int high)
{
    if(low<high)
    {
        int j=Partition(A, low, high);
        MedianQuickSort(A, low, j-1);
        MedianQuickSort(A, j+1, high);
    }

}

void Traverse(vector<int>& A)
{
    for(int i=0; i<A.size()-1; i++)  
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n;
    cin >> n;
    vector<int> A(n+1);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    A[n]=INT_MAX;
    MedianQuickSort(A, 0, n - 1);
    Traverse(A);
    return 0;
}









// RANDOMIZED QUICK SORT
#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
int Random(int low, int high)
{
    return low+rand() % (high-low+1);
}
int Partition(vector<int>& A, int low, int high)
{
    int R=Random(low,high);
    swap(A[R],A[low]); 
    int pivot=A[low];
    int i=low;
    int j=high+1;
    do
    {
        do
        {
            i++;
        } while (A[i]<pivot);

        do
        {
            j--;
        } while (A[j]>pivot);

        if(i<j)
        {
            swap(A[i], A[j]);
        }
        
    } while (i<j);

    swap(A[low],A[j]);
    return j;
}

void RandomizedQuickSort(vector<int>& A, int low, int high)
{
    if(low<high)
    {
        int j=Partition(A, low, high);
        RandomizedQuickSort(A, low, j-1);
        RandomizedQuickSort(A, j+1, high);
    }

}

void Traverse(vector<int>& A)
{
    for(int i=0; i<A.size()-1; i++)  
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n;
    cin >> n;
    vector<int> A(n+1);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    A[n]=INT_MAX;
    RandomizedQuickSort(A, 0, n - 1);
    Traverse(A);
    return 0;
}
