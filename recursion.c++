// #include <iostream>
// using namespace std;
// int RecursionFactorial(int n)
// {
//     int fact = 1;
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * RecursionFactorial(n - 1);
//     }
// }
// int main()
// {
//     int x;
//     cin >> x;
//     x = RecursionFactorial(x);
//     cout << x;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int RecursionPower(int a, int r)
// {
//     int x, power = 1;
//     if (r == 0)
//     {
//         power = a;
//         cout << power;
//     }
//     else
//     {
//         for (int i = 0; i < r; i++)
//         {
//             power = power * a;
//         }
//         cout << power;
//     }
// }
// int main()
// {
//     int a, r, y;
//     cin >> a >> r;
//     y = RecursionPower(a, r);
// }

// #include <iostream>
// using namespace std;
// int Fibonacci(int n)
// {
//     int c;
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else if (n > 2)
//     {
//         return Fibonacci(n - 1) + Fibonacci(n - 2);
//     }
// }
// int main()
// {
//     int n, x;
//     cin >> n;
//     x = Fibonacci(n);
//     cout << x;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int GCD(int a, int b)
// {
//     int n;
//     while (a != b)
//     {
//         if (a < b)
//         {
//             return GCD(a, b - a);
//         }
//         else
//         {
//             return GCD(a - b, b);
//         }
//     }
//     return a;
// }
// int main()
// {
//     int x, a, b;
//     cin >> a >> b;
//     x = GCD(a, b);
//     cout << x;
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int SumofArray(int A[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += A[i];
//     }
//     cout << sum;
// }
// int main()
// {
//     int x, n, A[5] = {1, 2, 3, 5, 4};
//     cin >> n;
//     x = SumofArray(A, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int reverse(int *A, int n)
// {
//     int l = 0, h = n - 1;
//     while (l < h)
//     {
//         if (A[l] < 0)
//         {
//             l++;
//         }
//         else if (A[h] > 0)
//         {
//             h--;
//         }
//         else
//         {
//             swap(A[l], A[h]);
//         }
//     }
// }
// int main()
// {
//     int x, A[] = {-1, 3, -3, 4, 6, -9};
//     int n = sizeof(A) / sizeof(int);
//     x = reverse(A, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int Duplicate(int A[], int n)
// {
//     int l = 0, h = n - 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (A[i] == A[j])
//             {
//                 cout << A[i] << " ";
//             }
//         }
//     }
// }
// int main()
// {
//     int x, A[] = {1, 2, 3, 4, 3, 4, 2, 8, 6, 9}, n;
//     n = sizeof(A) / sizeof(int);
//     x = Duplicate(A, n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int Missing(int A[], int n)
// {
//     int index;
//     for(int i=0; i<n; i++)
//     {
//         index=A[i]-1;
//         if(A[i]!=A[index])
//         {
//             swap(A[i],A[index]);
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(A[i]!=i+1)
//         {
//             cout<<i+1<<" ";
//         }
//     }
// }
// int main()
// {
//     int A[]={1,2,3,4,3},n,x;
//     n=sizeof(A)/sizeof(int);
//     x=Missing(A,n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void CommanElement(int A[], int B[], int C[], int x, int y, int z)
// {
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             for (int k = 0; k < z; k++)
//             {
//                 if (A[i] == B[j] && A[i] == C[k])
//                 {
//                     cout << A[i] << " ";
//                     break; // If we found the common element, no need to check further in this iteration
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int A[] = {1, 2, 3, 4, 7};
//     int B[] = {1, 2, 3, 9, 8, 7};
//     int C[] = {2, 3, 5, 6, 7, 8, 9};
//     int x = sizeof(A) / sizeof(int);
//     int y = sizeof(B) / sizeof(int);
//     int z = sizeof(C) / sizeof(int);
//     cout << "Common elements are: ";
//     CommanElement(A, B, C, x, y, z);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int FindSum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (n%10)+FindSum(n/10);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int x=FindSum(n);
//     cout<<x;
//     return 0;
// }

// Finding the number of elements in the triangle at the nth position:-
// #include <iostream>
// using namespace std;
// int Traingle(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n + (Traingle((n - 1)));
//     }
// }
// int main()
// {
//     int n, i;
//     cin >> n;
//     int x = Traingle(n);
//     cout << x << endl;
//     return 0;
// }

// Finding the triangle by the number of elements that is it triangle:-
//  #include <iostream>
//  using namespace std;
//  bool IsTriangle(int i, int n)
//  {
//      if(n==0)
//      {
//          return true;
//      }
//      if(n<0)
//      {
//          return false;
//      }
//      return IsTriangle(i+1, n-i);
//  }
//  int main() {
//      int n,i;
//      cout << "Enter the value of n: ";
//      cin >>n;
//      cin>>i;
//      int x = IsTriangle(i, n);
//      cout << x << endl;
//      return 0;
//  }







#include <iostream>
using namespace std;
int main()
{
    int b, x, n;
    cin >> n;
    x = n % 10;
    cout << x << endl;
    b = n;
    while (b >= 10)
    {
        b = b / 10;
    }
    cout << b << endl;
}

