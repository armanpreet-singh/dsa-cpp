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

        while (right < n) {                                    // Using While Loop.

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


class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int left = 0, sum = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {     // Using For Loop.
            sum += nums[right];

            while (left <= right && sum > k) {
                sum -= nums[left++];
            }

            if (sum == k)
                ans = max(ans, right - left + 1);
        }

        return ans;
    }
};


class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {

        unordered_map<long long, int> preSumMap;     // Prefix Sum + HashMap (Works for negatives too)
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Calculate prefix sum
            sum += nums[i];

            // If prefix sum itself equals k
            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }

            // Required prefix sum
            long long rem = sum - k;

            // If it exists, update answer
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Store first occurrence only
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};

// My Solution.

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {

        int l = 0;
        int sum = 0;
        int maxlen = 0;
        int n = nums.size();

        for (int r = 0; r < n; r++) {

            sum += nums[r];

            while (l <= r && sum > k) {
                sum -= nums[l];
                l++;
            }

            if (sum == k) {
                maxlen = max(maxlen, r - l + 1);
            }
        }

        return maxlen;
    }
};