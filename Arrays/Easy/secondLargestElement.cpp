// Second Largest Element.
// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

// Example :

// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation:
// The largest value in nums is 8, the second largest is 7.

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
int largest = INT_MIN;
int sLargest = INT_MIN;
for(int i=0; i<nums.size()-1; i++){
    if(nums[i]>largest){
        sLargest = largest;
        largest = nums[i];
    }
    else if(nums[i]>sLargest && nums[i]!=largest){
        sLargest=nums[i];
        return sLargest;
    }
    
}
      return -1;;
    }
};