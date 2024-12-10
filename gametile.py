# # # MOD = 998244353

# # # def solve_2048(t, test_cases):
# # #     max_y = max(test_cases)
# # #     dp = [0] * (max_y + 1)
# # #     dp[0] = 1  # Base case: one way to make score 0
    
# # #     # Iterate over powers of 2
# # #     power = 1
# # #     while power <= max_y:
# # #         for score in range(power, max_y + 1):
# # #             dp[score] = (dp[score] + dp[score - power]) % MOD
# # #         power *= 2
    
# # #     # Answer the queries
# # #     results = [dp[y] for y in test_cases]
# # #     return results

# # # # Input and Output Handling
# # # t = int(input())
# # # test_cases = list(map(int, input().split()))
# # # results = solve_2048(t, test_cases)
# # # print("\n".join(map(str, results)))



# # MOD = 998244353

# # def count_configurations(Y, tiles=101000):
# #     max_power = 0
# #     while (1 << max_power) <= Y:
# #         max_power += 1

# #     dp = [[0] * (tiles + 1) for _ in range(Y + 1)]
# #     dp[0][tiles] = 1  # Start with all tiles

# #     for x in range(Y + 1):
# #         for n in range(tiles + 1):
# #             if dp[x][n] == 0:
# #                 continue
# #             for k in range(max_power):
# #                 value = 1 << k
# #                 if x + value <= Y and n - 1 >= 0:
# #                     dp[x + value][n - 1] = (dp[x + value][n - 1] + dp[x][n]) % MOD

# #     result = sum(dp[Y]) % MOD
# #     return result

# # # Example Usage
# # Y = 8192
# # print(count_configurations(Y))






# from collections import defaultdict
# import bisect

# def min_collisions(N, c, positions):
#     # Initialize DP arrays
#     dp = [[float('inf')] * 2 for _ in range(N + 1)]
#     dp[1][1] = 0  # First column can only move right
#     dp[1][0] = float('inf')  # Invalid

#     # Collision computation helper
#     def count_collisions(target_heights, moving_heights):
#         target_heights.sort()
#         collisions = 0
#         for height in moving_heights:
#             # Check for collision using binary search
#             idx = bisect.bisect_left(target_heights, height)
#             if idx < len(target_heights) and target_heights[idx] == height:
#                 collisions += 1
#         return collisions

#     # Iterate through columns
#     for i in range(2, N + 1):
#         # Compute collisions for moving left
#         if i > 1:
#             left_collisions = count_collisions(positions[i - 2], positions[i - 1])
#             dp[i][0] = dp[i - 1][1] + left_collisions
        
#         # Compute collisions for moving right
#         if i < N + 1:
#             right_collisions = count_collisions(positions[i], positions[i - 1])
#             dp[i][1] = dp[i - 1][0] + right_collisions

#     # Return the minimum of the last column's states
#     return min(dp[N][0], dp[N][1])

# # Input Reading
# N = int(input())
# c = list(map(int, input().split()))
# positions = []
# for _ in range(N):
#     positions.append(list(map(int, input().split())))

# # Solve
# result = min_collisions(N, c, positions)
# print(result)



MOD = 998244353

def binary_concatenation_mod(t, test_cases):
    results = []
    for n in test_cases:
        result = 0
        length = 1
        power_of_two = 1
        
        while power_of_two <= n:
            next_power_of_two = power_of_two * 2
            start = power_of_two
            end = min(n, next_power_of_two - 1)
            
            count = end - start + 1
            contribution = count * length
            
            # Compute the modular contribution
            shift = pow(10, contribution, MOD)
            total_sum = (result * shift) % MOD
            total_sum = (total_sum + count * sum(range(start, end + 1)) % MOD) % MOD
            
            result = total_sum
            length += 1
            power_of_two = next_power_of_two
        results.append(result)
    return results

# Input handling
t = int(input().strip())
test_cases = list(map(int, input().strip().split()))
results = binary_concatenation_mod(t, test_cases)
print("\n".join(map(str, results)))