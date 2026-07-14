// Move Zeros to End.
// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

// NOTE :- This must be done in place, without making a copy of the array.

// Example :

// Input: nums = [0, 1, 4, 0, 5, 2]

// Output: [1, 4, 5, 2, 0, 0]

// Explanation:

// Both the zeroes are moved to the end and the order of the other elements stay the same

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int j =-1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
for(int i=j; i<nums.size(); i++){
    if(nums[i]!=0){
    temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    j++;
    }
}           
    }
};
