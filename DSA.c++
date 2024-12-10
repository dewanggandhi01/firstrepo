#include <stdio.h>
void Traverse(int A[],int N){
    int i;
    for(i=0;i<N;i++)  {
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
void InsertArray(int A[],int N,int i,int x){
    int j;
    for(j=N-1;j>=i;j--){
        A[j+1]=A[j];
    }    
    A[i]= x;
}
int DeleteArray(int A[],int N,int i){
    int x=A[i];
    for(int j=i+1;j<N;j++){
        A[j-1]= A[j];
    }
    return x;
}
int reverse(int A[],int N){
    int t,i;
    for(i=0;i<N/2;i++)
    {
        t=A[i];
        A[i]=A[N-i-1];
        A[N-i-1]=t;
    }
}
void InsertSortedArray(int A[],int N,int x){
    if(A[0]>A[1])
    {
        reverse(A,N);
    }
    int i=0;
    while (x>A[i])
    {
        i++;
    }
    InsertArray(A,N,i,x);
    N=N+1;
}
int MissingNumber(int A[],int N){
    int sumN=0,sumA=0;
    for(int i=0; i<N-1; i++){
        sumA+=A[i];
    }
    sumN=(N*(2*A[0]+(N-1)*(A[1]-A[0])))/2;
    return(sumN-sumA);
}
int MergeArray(int A[], int n, int B[], int m, int C[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
           C[k]=A[i];
           i++;
           k++;
        }
        else{
            C[k]=B[j];
            j++;
            k++;
        }  
    }
    while (i<n){
        C[k]=A[i];
        i++;
        k++;
    }
    while (j<m){
        C[k]=B[j];
        j++;
        k++;
    }
}
int main(){
    int A1[10]={1,2,3,4,5};
    int B1[3]={6,9,10};
    int n=5;
    int m=3;
    int C[n+m];
    MergeArray(A1,n,B1,m,C);
    for(int i=0; i<n+m; i++){
        printf("%d ",C[i]);
    }
    printf("\n");
    Traverse(A1,n);
    InsertArray(A1,n,2,30);
    n=n+1;
    Traverse(A1,n);
    DeleteArray(A1,n ,3);
    n=n-1;
    Traverse(A1,n);
    int A2[10]={10,11,14,17,25};
    int N=5;
    Traverse(A2,N);
    InsertSortedArray(A2,N,12);
    N=N+1;
    Traverse(A2,N);
    return 0;
}




#include<stdio.h>
int reverse(int A[], int n, int k){
    while(n<k){
        int x=A[n];
        A[n]=A[k];
        A[k]=x;
        n++;
        k--;
    }
}
int RotateArray(int A[], int n, int k){
    reverse(A, n-k, n-1);
    reverse(A, 0, n-k-1);
    reverse(A, 0, n-1); 
}
int traverse(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("  %d",A[i]);
    }
    printf("\n\n");
}
int main(){
    int A[5]={1,2,3,4,5};
    int n=5;
    RotateArray(A, 5, 3);
    traverse(A, 5);
}

// Anagram
#include<iostream>
using namespace std;
int main()
{
    char str1[]="alphabet";
    char str2[]="alphabet";
    int dat[256]={0};
    for(int i=0; str1[i]!='\0'; i++)
    {
        dat[str1[i]]++; 
    }
    for(int i=0; str2[i]!='\0'; i++)
    {
        dat[str2[i]]--;
    }
    for(int i=0; i<256; i++)
    {
        if (dat[i]!=0)
        {
            cout<<"Not Anagram";
        }
    }
}







