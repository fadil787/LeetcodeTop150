class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Brute Force Approach using erase
        for (int i = 1; i < nums.size(); ) {
            if (nums[i] == nums[i - 1]) {
                // Erase the duplicate element
                nums.erase(nums.begin() + i);
                // Don't increment i here, since elements shift left
            } else {
                i++; // Only move forward when no erase happens
            }
        }
        return nums.size(); // Final size = number of unique elements
    }
};

