// Linear Search.
// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1


// Example :

// Input: nums = [2, 3, 4, 5, 3], target = 3

// Output: 1

// Explanation:

// The first occurence of 3 in nums is at index 1.

    class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int firstOccurence;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==target){
                firstOccurence = i;
                 return firstOccurence;
                break;
            }
        }
        return -1;
    }
};
