// Next Permutation.

// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

 

// Example : 

// Input: nums = [1,2,3]
// Output: [1,3,2]

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());                // using the STL function next_permutation.
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();

        // Find the pivot
        for (int i = n - 1; i > 0; i--) {                          // Traverse the array from right to left and find the first index pivot.
            if (nums[i] > nums[i - 1]) {
                pivot = i - 1;
                break;
            }
        }

        // If no pivot exists, reverse the entire array
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the rightmost element greater than the pivot
        int t = n - 1;
        while (nums[pivot] >= nums[t]) {
            t--;
        }

        // Swap pivot with the next greater element
        swap(nums[pivot], nums[t]);

        // Reverse the suffix
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};