class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int candidate = nums[0];
        int count = 1;

        for(int i=1; i<size; i++){
            if(count == 0) candidate = nums[i];
            if(nums[i] == candidate) count++;
            else count--;
        }

        return candidate;
        
    }
};
