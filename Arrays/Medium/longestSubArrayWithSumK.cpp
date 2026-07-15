// Longest subarray with sum K.
// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

// Example : 

// Input: nums = [10, 5, 2, 7, 1, 9],  k=15
// Output: 4
// Explanation:
// The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4.This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15.Therefore,the length of this sub-array is 4.

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int left = 0, right = 0;
        long long sum = nums[0];
        int maxLen = 0;
        int n = nums.size();

        while (right < n) {                                    // Using While Loop 

            // Shrink the window 
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            // Update answer
            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }

            // Expand the window
            right++;
            if (right < n)
                sum += nums[right];
        }

        return maxLen;
    }
};
