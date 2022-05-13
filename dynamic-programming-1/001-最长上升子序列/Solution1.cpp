/**
 * 
 * @author <a href="https://github.com/ooooo-youwillsee">ooooo</a>
 * @date 2022/05/07 07:24
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int lengthOfLIS(vector<int> &nums) {
    int n = nums.size();

    vector<int> dp(n, 1);

    int ans = 0;

    for (int i = 1; i < n; ++i) {
      for (int j = i - 1; j >= 0; --j) {
        if (nums[j] < nums[i]) {
          dp[i] = max(dp[i], dp[j] + 1);
          ans = max(ans, dp[i]);
        }
      }
    }

    return ans;
  }
};