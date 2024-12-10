// // // // // // // #include <iostream>
// // // // // // // #include <vector>
// // // // // // // using namespace std;

// // // // // // // void solve() 
// // // // // // // {
// // // // // // //     int t;
// // // // // // //     cin >> t;
// // // // // // //     while (t--) 
// // // // // // //     {
// // // // // // //         int n,d,l;
// // // // // // //         cin >> n >> d >> l;
// // // // // // //         if (l> n - 1 || d >= n || l < 2) 
// // // // // // //         {
// // // // // // //             cout << "-1\n";
// // // // // // //             continue;
// // // // // // //         }
// // // // // // //         vector<pair<int, int>> edges;
// // // // // // //         for (int i = 1; i <= d; ++i)
// // // // // // //         {
// // // // // // //             edges.push_back({i, i + 1});
// // // // // // //         }
// // // // // // //         int leaves_needed = l - (d + 1);  
// // // // // // //         int current_node = 1;           
// // // // // // //         int next_node = d + 2;          
// // // // // // //         while (leaves_needed > 0 && next_node <= n) 
// // // // // // //         {
// // // // // // //             edges.push_back({current_node, next_node});
// // // // // // //             leaves_needed--;
// // // // // // //             next_node++;
// // // // // // //             if (current_node < d + 1) 
// // // // // // //             {
// // // // // // //                 current_node++;  
// // // // // // //             }
// // // // // // //         }

// // // // // // //         if (leaves_needed == 0 && edges.size() == n - 1) 
// // // // // // //         {
// // // // // // //             for (const auto& edge : edges) 
// // // // // // //             {
// // // // // // //                 cout << edge.first << " " << edge.second << "\n";
// // // // // // //             }
// // // // // // //         }
// // // // // // //         else {
// // // // // // //             cout << "-1\n";
// // // // // // //         }
// // // // // // //     }
// // // // // // // }
// // // // // // // int main() 
// // // // // // // {
// // // // // // //     ios::sync_with_stdio(false);
// // // // // // //     cin.tie(nullptr);
// // // // // // //     solve();
// // // // // // //     return 0;
// // // // // // // }




// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // // Function to count collisions
// // // // // // int count_collisions(vector<int> &target_heights, vector<int> &moving_heights) {
// // // // // //     sort(target_heights.begin(), target_heights.end()); // Sort the target column heights
// // // // // //     int collisions = 0;

// // // // // //     for (int height : moving_heights) {
// // // // // //         // Use binary search to check if height exists in target_heights
// // // // // //         if (binary_search(target_heights.begin(), target_heights.end(), height)) {
// // // // // //             collisions++;
// // // // // //         }
// // // // // //     }
// // // // // //     return collisions;
// // // // // // }

// // // // // // // Function to solve the problem
// // // // // // int min_collisions(int N, vector<int> &c, vector<vector<int>> &positions) {
// // // // // //     // DP table: dp[i][0] = minimum collisions if column i moves left
// // // // // //     //           dp[i][1] = minimum collisions if column i moves right
// // // // // //     vector<vector<int>> dp(N + 1, vector<int>(2, INT_MAX));
    
// // // // // //     // Base case
// // // // // //     dp[1][1] = 0; // First column can only move right
// // // // // //     dp[1][0] = INT_MAX; // Not allowed

// // // // // //     // Iterate over each column
// // // // // //     for (int i = 2; i <= N; i++) {
// // // // // //         // Compute collisions for moving left
// // // // // //         if (i > 1) {
// // // // // //             int left_collisions = count_collisions(positions[i - 2], positions[i - 1]);
// // // // // //             dp[i][0] = dp[i - 1][1] + left_collisions;
// // // // // //         }

// // // // // //         // Compute collisions for moving right
// // // // // //         if (i < N + 1) {
// // // // // //             int right_collisions = count_collisions(positions[i], positions[i - 1]);
// // // // // //             dp[i][1] = dp[i - 1][0] + right_collisions;
// // // // // //         }
// // // // // //     }

// // // // // //     // Return the minimum of the last column's states
// // // // // //     return min(dp[N][0], dp[N][1]);
// // // // // // }

// // // // // // int main() {
// // // // // //     // Input
// // // // // //     int N;
// // // // // //     cin >> N;
// // // // // //     vector<int> c(N);
// // // // // //     for (int i = 0; i < N; i++) {
// // // // // //         cin >> c[i];
// // // // // //     }

// // // // // //     vector<vector<int>> positions(N);
// // // // // //     for (int i = 0; i < N; i++) {
// // // // // //         positions[i].resize(c[i]);
// // // // // //         for (int j = 0; j < c[i]; j++) {
// // // // // //             cin >> positions[i][j];
// // // // // //         }
// // // // // //     }

// // // // // //     // Solve and print the result
// // // // // //     cout << min_collisions(N, c, positions) << endl;

// // // // // //     return 0;
// // // // // // }



// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // // Function to count collisions between two sets of heights
// // // // // int count_collisions(const vector<int> &target_heights, const vector<int> &moving_heights) {
// // // // //     int collisions = 0;
// // // // //     unordered_set<int> target_set(target_heights.begin(), target_heights.end());

// // // // //     // Count how many heights from moving_heights already exist in target_set
// // // // //     for (int height : moving_heights) {
// // // // //         if (target_set.find(height) != target_set.end()) {
// // // // //             collisions++;
// // // // //         }
// // // // //     }
// // // // //     return collisions;
// // // // // }

// // // // // // Function to solve the problem using dynamic programming
// // // // // int min_collisions(int N, const vector<int> &c, const vector<vector<int>> &positions) {
// // // // //     // DP table: dp[i][0] = minimum collisions up to column i if it moves left
// // // // //     //           dp[i][1] = minimum collisions up to column i if it moves right
// // // // //     vector<vector<int>> dp(N + 1, vector<int>(2, INT_MAX));
    
// // // // //     // Base case: First column can only move right
// // // // //     dp[1][1] = 0;  // Moving right
// // // // //     dp[1][0] = INT_MAX;  // Moving left (invalid for first column)

// // // // //     // Fill DP table
// // // // //     for (int i = 2; i <= N; i++) {
// // // // //         // Compute dp[i][0] if column i moves left
// // // // //         if (i > 1) {
// // // // //             int left_collisions = count_collisions(positions[i - 2], positions[i - 1]);
// // // // //             dp[i][0] = dp[i - 1][1] + left_collisions;
// // // // //         }

// // // // //         // Compute dp[i][1] if column i moves right
// // // // //         if (i < N + 1) {
// // // // //             int right_collisions = count_collisions(positions[i], positions[i - 1]);
// // // // //             dp[i][1] = dp[i - 1][0] + right_collisions;
// // // // //         }
// // // // //     }

// // // // //     // Return the minimum collisions for the last column
// // // // //     return min(dp[N][0], dp[N][1]);
// // // // // }

// // // // // int main() {
// // // // //     // Input
// // // // //     int N;
// // // // //     cin >> N;
// // // // //     vector<int> c(N);
// // // // //     for (int i = 0; i < N; i++) {
// // // // //         cin >> c[i];
// // // // //     }

// // // // //     vector<vector<int>> positions(N);
// // // // //     for (int i = 0; i < N; i++) {
// // // // //         positions[i].resize(c[i]);
// // // // //         for (int j = 0; j < c[i]; j++) {
// // // // //             cin >> positions[i][j];
// // // // //         }
// // // // //     }

// // // // //     // Solve the problem
// // // // //     cout << min_collisions(N, c, positions) << endl;

// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <algorithm>
// // // // #include <climits>
// // // // using namespace std;
// // // // int count_collisions(const vector<vector<int>>& heights, int row, int col1, int col2) 
// // // // {
// // // //     if (col1 < 0 || col2 < 0 || col1 >= heights[row].size() || col2 >= heights[row].size()) 
// // // //     {
// // // //         return INT_MAX; 
// // // //     }
// // // //     return abs(heights[row][col1] - heights[row][col2]); 
// // // // }
// // // // int min_collisions(const vector<vector<int>>& heights)
// // // // {
// // // //     int n = heights.size(); 
// // // //     if (n == 0) return 0;
// // // //     int m = heights[0].size(); 
// // // //     vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
// // // //     for (int j = 0; j < m; ++j) {
// // // //         dp[0][j] = 0;
// // // //     }
// // // //     for (int i = 1; i < n; ++i) {
// // // //         for (int j = 0; j < m; ++j) {
// // // //             for (int k = max(0, j - 1); k <= min(m - 1, j + 1); ++k) {
// // // //                 if (dp[i - 1][k] != INT_MAX) {
// // // //                     dp[i][j] = min(dp[i][j], dp[i - 1][k] + count_collisions(heights, i, j, k));
// // // //                 }
// // // //             }
// // // //         }
// // // //     }
// // // //     int ans = INT_MAX;
// // // //     for (int j = 0; j < m; ++j) {
// // // //         ans = min(ans, dp[n - 1][j]);
// // // //     }
// // // //     return ans;
// // // // }
// // // // int main() {
// // // //     int n, m;
// // // //     cin >> n >> m; 
// // // //     vector<vector<int>> heights(n, vector<int>(m));
// // // //     for (int i = 0; i < n; ++i) {
// // // //         for (int j = 0; j < m; ++j) {
// // // //             cin >> heights[i][j];
// // // //         }
// // // //     }
// // // //     int ans = min_collisions(heights);
// // // //     cout << ans << endl;
// // // //     return 0;
// // // // }




// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // #include <unordered_set>
// // // // // #include <algorithm>
// // // // // #include <climits>

// // // // // using namespace std;

// // // // // // Function to count collisions when moving between columns
// // // // // int count_collisions(const vector<int>& target, const vector<int>& moving) {
// // // // //     unordered_set<int> target_set(target.begin(), target.end());
// // // // //     int collisions = 0;

// // // // //     for (int height : moving) {
// // // // //         if (target_set.find(height) != target_set.end()) {
// // // // //             collisions++;
// // // // //         }
// // // // //     }
// // // // //     return collisions;
// // // // // }

// // // // // // Function to minimize collisions using dynamic programming
// // // // // int min_collisions(const vector<vector<int>>& heights) {
// // // // //     int n = heights.size(); // Number of columns

// // // // //     // Edge case: No columns
// // // // //     if (n == 0) return 0;

// // // // //     // DP table: dp[i][0] = min collisions if column i moves left
// // // // //     //           dp[i][1] = min collisions if column i moves right
// // // // //     vector<vector<int>> dp(n, vector<int>(2, INT_MAX));

// // // // //     // Base case: First column can only move right
// // // // //     dp[0][1] = 0;

// // // // //     // Fill DP table
// // // // //     for (int i = 1; i < n; ++i) {
// // // // //         // If column i moves left
// // // // //         if (!heights[i - 1].empty() && !heights[i].empty()) {
// // // // //             dp[i][0] = dp[i - 1][1] + count_collisions(heights[i - 1], heights[i]);
// // // // //         }

// // // // //         // If column i moves right
// // // // //         if (i < n - 1 && !heights[i + 1].empty() && !heights[i].empty()) {
// // // // //             dp[i][1] = dp[i - 1][0] + count_collisions(heights[i + 1], heights[i]);
// // // // //         }
// // // // //     }

// // // // //     // Result: Minimum collisions for the last column
// // // // //     return min(dp[n - 1][0], dp[n - 1][1]);
// // // // // }

// // // // // int main() {
// // // // //     int n;
// // // // //     cin >> n;

// // // // //     vector<vector<int>> heights(n);
// // // // //     for (int i = 0; i < n; ++i) {
// // // // //         int ci;
// // // // //         cin >> ci;
// // // // //         heights[i].resize(ci);
// // // // //         for (int j = 0; j < ci; ++j) {
// // // // //             cin >> heights[i][j];
// // // // //         }
// // // // //     }

// // // // //     int ans = min_collisions(heights);
// // // // //     cout << ans << endl;

// // // // //     return 0;
// // // // // }
// // // #include <iostream>
// // // #include <vector>
// // // #include <climits>
// // // #include <algorithm>

// // // using namespace std;

// // // // Function to calculate the number of collisions when moving from column i to column j
// // // int count_collisions(const vector<int>& col1, const vector<int>& col2) {
// // //     int collisions = 0;
// // //     // Count how many objects in col1 and col2 end up at the same position
// // //     for (int h1 : col1) {
// // //         for (int h2 : col2) {
// // //             if (h1 == h2) {
// // //                 collisions++;
// // //             }
// // //         }
// // //     }
// // //     return collisions;
// // // }

// // // // Main function to minimize collisions using dynamic programming
// // // int min_collisions(const vector<vector<int>>& heights) {
// // //     int n = heights.size(); // Number of columns
// // //     vector<vector<int>> dp(n, vector<int>(2, INT_MAX)); // DP array to store the minimum collisions

// // //     // Initialize the first column (can only move right)
// // //     dp[0][1] = 0; // No collisions if the first column moves right

// // //     // Fill the dp table for each column
// // //     for (int i = 1; i < n; ++i) {
// // //         // If the i-th column moves left
// // //         if (i > 0) {
// // //             dp[i][0] = min(dp[i][0], dp[i - 1][1] + count_collisions(heights[i], heights[i - 1]));
// // //         }
// // //         // If the i-th column moves right
// // //         if (i < n - 1) {
// // //             dp[i][1] = min(dp[i][1], dp[i - 1][0] + count_collisions(heights[i], heights[i + 1]));
// // //         }
// // //     }

// // //     // Get the minimum number of collisions from the last column
// // //     return min(dp[n - 1][0], dp[n - 1][1]);
// // // }

// // // int main() {
// // //     int n;
// // //     cin >> n; // Number of columns
// // //     vector<vector<int>> heights(n);

// // //     // Read the heights for each column
// // //     for (int i = 0; i < n; ++i) {
// // //         int ci;
// // //         cin >> ci; // Number of objects in column i
// // //         heights[i].resize(ci);
// // //         for (int j = 0; j < ci; ++j) {
// // //             cin >> heights[i][j]; // Heights of objects in column i
// // //         }
// // //     }

// // //     // Find the minimum number of collisions
// // //     int result = min_collisions(heights);
// // //     cout << result << endl;

// // //     return 0;
// // // }
        








// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // #define MOD 998244353

// // using namespace std;

// // vector<int> solve(int t, const vector<int>& ys) {
// //     // Find the maximum Y to compute DP table
// //     int max_y = *max_element(ys.begin(), ys.end());

// //     // Precompute DP table
// //     vector<int> dp(max_y + 1, 0);
// //     dp[0] = 1;  // Base case: one way to form score 0 (empty configuration)
    
// //     int power_of_2 = 1;
// //     while (power_of_2 <= max_y) {
// //         for (int y = power_of_2; y <= max_y; ++y) {
// //             dp[y] = (dp[y] + dp[y - power_of_2]) % MOD;
// //         }
// //         power_of_2 *= 2;
// //     }

// //     // Answer queries
// //     vector<int> results;
// //     for (int y : ys) {
// //         results.push_back(dp[y]);
// //     }
    
// //     return results;
// // }

// // int main() {
// //     // Input reading
// //     int t;
// //     cin >> t;
    
// //     vector<int> ys(t);
// //     for (int i = 0; i < t; ++i) {
// //         cin >> ys[i];
// //     }

// //     // Solve and print results
// //     vector<int> results = solve(t, ys);
// //     for (int res : results) {
// //         cout << res << endl;
// //     }

// //     return 0;
// // }
// // nahi



// #include<bits/stdc++.h>

// using namespace std;
// string toBinaryWithLeadingZeroes(long long n) {
//     int width = ceil(log2(n + 1)); 
//     if (width == 0) width = 1;    
//     return bitset<64>(n).to_string().substr(64 - width);
// }
// long long binaryMod(const string& binary) {
//     long long result = 0;
//     for (char bit : binary) {
//         result = (result * 10 + (bit - '0')) % 998244353;
//     }
//     return result;
// }
// int main()
// {
//   int t;
//   cin>>t;
//   while(t--)
//   {
//     long long int n;
//     cin>>n;
//     string s;
//     for(int i=1;i<=n;i++)
//     {
//       string t=toBinaryWithLeadingZeroes(i);

//      s=s+t;
//     }
//     cout<< binaryMod(s);

//   }
// }







#include<bits/stdc++.h>

using namespace std;
string toBinaryWithLeadingZeroes(long long n) {
    int width = ceil(log2(n + 1)); 
    if (width == 0) width = 1;    
    return bitset<64>(n).to_string().substr(64 - width);
}
long long binaryMod(const string& binary) {
    long long result = 0;
    for (char bit : binary) {
        result = (result * 10 + (bit - '0')) % 998244353;
    }
    return result;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
      string t=toBinaryWithLeadingZeroes(i);

     s=s+t;
    }
    cout<< binaryMod(s);
  }
}