// Left Rotate Array by One.
// Given an integer array nums, rotate the array to the left by one.

// Example :

// Input: nums = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]
// Explanation:
// Initially, nums = [1, 2, 3, 4, 5]
// Rotating once to left -> nums = [2, 3, 4, 5, 1]

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
int j = nums[0];
for(int i=1; i<nums.size(); i++){
    nums[i-1] = nums[i];
}
nums[nums.size()-1] = j;
    }
};