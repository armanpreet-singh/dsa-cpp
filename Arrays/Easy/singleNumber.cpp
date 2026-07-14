// Single Number.
// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.

// Example : 

// Input : nums = [1, 2, 2, 4, 3, 1, 4]
// Output : 3
// Explanation : The integer 3 has appeared only once.

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int, int> mp;                          // Using Hash Map...

        // Count frequency
        for (int i = 0; i < nums.size(); i++) {                  
            mp[nums[i]]++;
        }

        // Find element with frequency 1
        for (auto it : mp) {
            if (it.second == 1)
                return it.first;
        }

        return -1;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];                              // Using XOR...
        }

        return ans;
    }
};