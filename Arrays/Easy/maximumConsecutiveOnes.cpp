// Maximum Consecutive Ones,
// Given a binary array nums, return the maximum number of consecutive 1s in the array.

// A binary array is an array that contains only 0s and 1s.

// Example : 

// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
// Output: 3
// Explanation:
// The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max = 0;
int count = 0;
        for(int i=0; i<=nums.size()-1; i++){
              
            if(nums[i]==1){
              count++;
            }else{
                Max = max(count,Max);
                count = 0;
            }
        }
        return Max;
    }
};