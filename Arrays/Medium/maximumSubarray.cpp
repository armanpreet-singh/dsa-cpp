// Maximum Subarray.
// Given an integer array nums, find the subarray with the largest sum, and return its sum.


// Example : 

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;                      // trying out every possible sub-array.
        for(int i = 0; i < n; i++) 
            for(int j = i, curSum = 0; j < n ; j++) 
                curSum += nums[j],
                ans = max(ans, curSum);        
        return ans;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){                       // Kadane's Algorithm.
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }

            if(sum<0){
                sum=0;
            }
        }
return max;
    }
};