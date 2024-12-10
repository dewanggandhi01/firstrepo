// Program to find the odd element from array which is having some rule(you can seee the given example in the array).
// #include <iostream>
// #include <vector>
// using namespace std;
// int FindOdd(vector<int> arr)
// {
//     int e = arr.size() - 1;
//     int s = 0;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (s == e)
//         {
//             return s;
//         }
//         if (mid % 2 == 0)
//         {
//             if (arr[mid] == arr[mid + 1])
//             {
//                 s = mid + 2;
//             }
//             else
//             {
//                 e = mid;
//             }
//         }
//         else
//         {
//             if (arr[mid] == arr[mid - 1])
//             {
//                 s = mid + 1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
//     int ans = FindOdd(arr);
//     cout << "index is " << ans << endl;
//     cout << "value is " << arr[ans] << endl;
//     return 0;
// } 









// // Program to use Exponemtial Binary Search to reduce the Time Complexcity 
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int s, int e, int x)
// {
//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(arr[mid]==x)
//         {
//             return mid;
//         }
//         else if(arr[mid]>x)
//         {
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int ExponentialBinarySearch(int arr[], int n, int x)
// {
//     int i=1;
//     if(arr[0]==x)
//     {
//         return 0;
//     }
//     while(i<=x && arr[i]<=x)
//     {
//         i=i*2;
//     }
//     int res;
//     return res=BinarySearch(arr, i/2, min(i,n-1), x);
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int n=sizeof(arr)/sizeof(int);
//     int x;
//     cin>>x;
//     int ans=ExponentialBinarySearch(arr,n,x);
//     cout<<ans<<endl;
//     return 0;
// }