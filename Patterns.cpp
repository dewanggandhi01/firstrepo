// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout << "* ";
//         }
//         cout<<endl;
//     }
// }

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0; j<(2*i)+1; j++)
//         {
//             if(j==0)
//             {
//                 cout<<"1";
//                 if(i==0)
//                 {
//                     cout<<endl;
//                 }
//             }
//             else if(j==(2*i)+1-1)
//             {
//                 cout<<i+1;
//                 cout<<endl;
//             }
//             else if (i==4)
//             {
//                 if(j%2==0)
//                 {
//                     cout<<" ";
//                     cout<<i+1;
//                 }
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//     }
//}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         // Print leading spaces
//         for(int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // Print numbers and spaces in between
//         for(int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//             {
//                 cout << j + 1;
//             }
//             else
//             {
//                 cout << " ";
//             }
//             if (j < i)
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

//     1
//    1 2
//   1   3
//  1     4
// 1       5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++)
//         {
//             if(j==0)
//             {
//                 cout<<"*";
//             }
//             else if(j==2*i)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++)
//         {
//             if(j==0 || j==n-i-1-1)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *
//    * *
//   *   *
//  *     *
// *       *
// *  *
//  * *
//   **
//    *
//     *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i+1; j++)
//         {
//             cout<<char(65+j);
//         }
//         for(int j=i; j>=1; j--)
//         {
//             cout<<char(64+j);
//         }
//         cout<<endl;
//     }
// }

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA

// #include<iostream>
// using namespace std;
// int mani()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<=i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=n-i-1; j<n; j++)
//         {
//             cout<<char(j+64);
//         }
//         cout<<endl;
//     }
// }

// D
// CD
// BCD
// ABCD
// @ABCD

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<i+1; j++)
//         {
//             cout<<i+j+1<<" ";
//         }
//         for(int j=n+i; j>n; j--)
//         {
//             cout<<i+j-n<<" ";
//         }
//         cout<<endl;
//     }
// }

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<(2*i)+1; j++ )
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n+1; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<2*n+1-i-i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
// * * * * * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n+1; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<2*n+1-i-i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n+1; i++)
//     {
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<(2*i)+1; j++ )
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// * * * * * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *
//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
// * * * * * * * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i+1; j++)
//         {
//             cout<<j+1;
//         }
//         for(int j=0; j<n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=i+1; j>0; j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     int arr[6][7] = {0};
//     arr[0][5] = 1;
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 0; i < 6; j++)
//         {
//             arr[i][j] = arr[i - 1][j] + arr[i - 1][j + 1];
//         }
//     }
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (arr[i][j] != 0)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<stdio.h>
// void main(){
//     //n=6,n-1=5,n+1=6
//     int arr[6][7]={0};
//     arr[0][5]=1;
//     for(int i=1;i<=5;i++){
//         for(int j=0;j<=5;j++){
//             arr[i][j]=arr[i-1][j]+arr[i-1][j+1];
//         }
//     }
//     for(int i=0;i<6;i++){
//         for(int j=0;j<7;j++){
//             if(arr[i][j]!=0){
//                 printf("%d",arr[i][j]);
//             }
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int b[3][3];
//     for(int i=0; i<=2; i++)
//     {
//         for(int j=0; j<=2; j++)
//         {
//             b[j][i]=a[i][j];
//         }
//     }
//     for(int i=0; i<=2; i++)
//     {
//         for(int j=0; j<=2; j++)
//         {
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//                   Transpose of the matrix
// 1 4 7
// 2 5 8
// 3 6 9

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int b[3][3];
//     for(int i=0; i<=2; i++)
//     {
//         for(int j=0; j<=2; j++)
//         {
//             b[j][i]=a[i][j];
//         }
//     }
//     for(int i=0; i<=2; i++)
//     {
//         int s=0;
//         int e=2;
//         while(s<e)
//         {
//             swap(b[i][s],b[i][e]);
//             s++;
//             e--;
//         }
//     }
//     for(int i=0; i<=2; i++)
//     {
//         for(int j=0; j<=2; j++)
//         {
//              cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
//                ROTATE MATRIX CLOCKWISE BY 90 DEGREE
// 7 4 1
// 8 5 2
// 9 6 3



// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[100][100],b[100][100], n,m,x,y;
//     int c[100][100];
//     cin >> n >> m>> x>>y;
//     if (m == x)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin>>a[i][j];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin>>b[i][j];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 c[i][j]=a[i][j]+b[i][j];
//                 cout<<c[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }
//                  MATRIX ADDTION
// 3
// 3
// 3
// 3

// 1 2 3
// 1 2 3
// 1 2 3

// 4 5 6
// 4 5 6
// 4 5 6

// 5 7 9 
// 5 7 9 
// 5 7 9 





#include <iostream>
using namespace std;
int main()
{
    int a[100][100],b[100][100], n,m,x,y;
    int c[100][100];
    cin >> n >> m>> x>>y;
    if (m == x)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>b[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for(int k=0; k<n; k++)
                {
                    c[i][j]=a[i][k]*b[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
//               MATRIX MULTIPLICATION
// 2
// 2
// 2
// 2
// 1 2
// 1 2
// 1 2
// 1 2
// 2 4 
// 2 4




// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         sum=sum+(i*i);
//     }
//     cout<<sum;
// }
// A



//B
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sign=1;
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         sum=sum+(i*i)*sign;
//         sign=sign*(-1);
//     }
//     cout<<sum;
// }





//D
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int f=1;
//     int sign=1;
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         f=f*i;
//         sum=sum+f*sign;
//         sign=sign*(-1);
//     }
//     cout<<sum;
// }



//C
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int f=1;
//     int sign=1;
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         f=f*i;
//         sum=sum+f;
//     }
//     cout<<sum;
// }





// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int f=1;
//     int sign=1;
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         f=f*i;
//         sum=sum+f*sign;
//         sign=sign*(-1);
//     }
//     cout<<sum;
// }




//E
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int f=1;
//     int sign=1;
//     int sum=0;
//     for(int i=1; i<=n; i+2)
//     {
//         sum=sum+(i)*sign;
//         sign=sign*(-1);
//     }
//     cout<<sum;
// }


//G
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     double f=1;
//     double sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         f=f*i;
//         sum=sum+float(i/f);
//     }
//     cout<<sum;
// }




//H
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     double num=1;
//     double f=1;
//     int sign=1;
//     double sum=1;
//     for(int i=1; i<=n; i++)
//     {
//         num=num*x;
//         f=f*i;
//         sum=sum+(num/f);
//     }
//     cout<<sum;
// }


//I
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     double num=1;
//     double f=1;
//     int sign=-1;
//     double sum=1;
//     for(int i=1; i<=n; i++)
//     {
//         num=num*x;
//         f=f*i;
//         sum=sum+(num/f)*sign;
//         sign=sign*(-1);
//     }
//     cout<<sum;
// }


//J
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     double num=x;
//     double f=1;
//     int sign=-1;
//     double sum=x;
//     for(int i=1; i<=n; i++)
//     {
//         num=num*x*x;
//         f=f*(2*i)*(2*i+1);
//         sum=sum+(num/f)*sign;
//         sign=sign*(-1);
       
//     }
//     cout<<sum;
// }


//K
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    double num=1;
    double f=1;
    int sign=-1;
    double sum=1;
    for(int i=1; i<=n; i++)
    {
        num=num*x*x;
        f=f*(2*i)*(2*i-1);
        sum=sum+(num/f)*sign;
        sign=sign*(-1);
    }
    cout<<sum;
    return 0;
}

