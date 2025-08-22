class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Brute force: remove elements one by one if they match val
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] == val) {
                // erase removes the element and shifts all elements left
                nums.erase(nums.begin() + i); 
            } else {
                i++; // only move forward if no erase (since erase shifts elements)
            }
        }
        return nums.size();
    }
};
