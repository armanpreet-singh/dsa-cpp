// Leaders in an Array.

// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

// Example : 

// Input: nums = [1, 2, 5, 3, 1, 2]
// Output: [5, 3, 2]
// Explanation:
// 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {                    // For every element, check all elements on its right.
            bool leader = true;

            for(int j = i + 1; j < n; j++) {
                if(nums[j] >= nums[i]) {
                    leader = false;
                    break;
                }
            }

            if(leader)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();
        int maxi = INT_MIN;

        for(int i = n - 1; i >= 0; i--) {                 // Traverse from right to left while maintaining the maximum element seen so far.
            if(nums[i] > maxi) {
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};