// Majority Element.
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example :

// Input: nums = [3,2,3]
// Output: 3

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());                // Using Sort.
        int n = nums.size();
        return nums[n/2];
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;                     // Using Hash-Map.
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) { 
        int candidate = 0;
        int count = 0;                                 //  Moore's Voting Algorithm.

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }

            if (num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = 0;
        int count = 0;
        int i = 0;

        while (i < nums.size()) {                       // Using While Loop.
            if (count == 0) {
                element = nums[i];
            }

            if (nums[i] == element)
                count++;
            else
                count--;

            i++;
        }

        return element;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;                                // If Problem Doesn't Guarantee A Majority Element.
        int count = 0;

        for (int num : nums) {
            if (count == 0)
                candidate = num;

            count += (num == candidate) ? 1 : -1;
        }

        // Verification
        count = 0;
        for (int num : nums)
            if (num == candidate)
                count++;

        return (count > nums.size() / 2) ? candidate : -1;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = 0;
        int count = 0;
        int i = 0;

        // First pass: Find candidate
        while (i < nums.size()) {
            if (count == 0) {
                element = nums[i];
            }

            if (nums[i] == element)
                count++;
            else
                count--;

            i++;
        }

        // Second pass: Verify candidate
        count = 0;
        i = 0;

        while (i < nums.size()) {                                      // If the majority element is not guaranteed.
            if (nums[i] == element)
                count++;
            i++;
        }

        if (count > nums.size() / 2)
            return element;

        return -1; // No majority element
    }
};