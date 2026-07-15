// Two Sum.
// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.


// Example : 

// Input: nums = [1, 6, 2, 10, 3], target = 7
// Output: [0, 1]
// Explanation:
// nums[0] + nums[1] = 1 + 6 = 7

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {             
        for(int i = 0; i < nums.size(); i++) {                         // Using For Loop.
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;                                    // Using Hash Map.

        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if(mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};