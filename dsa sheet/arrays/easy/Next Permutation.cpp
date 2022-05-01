//NextPermutation:https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i=n-2, j=n-1;  //starting from right
        
        while (i>=0 && nums[i]>=nums[i+1]) i--;  //find the first increasing pair
        if (i>=0) {
            while (j>i && nums[j]<=nums[i]) j--;  //find the right replacement for nums[i].
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
    }
};