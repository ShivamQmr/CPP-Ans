#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for max_element
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    vector<int> nums = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int result = lengthOfLIS(nums);
    cout << "Length of Longest Increasing Subsequence: " << result << endl;
    return 0;
}
