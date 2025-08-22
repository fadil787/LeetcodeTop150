class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int nonValIndex = 0; // this is the index where we store elements which are not val
        for(int i=0; i<size; i++){
            if(nums[i] != val){
                nums[nonValIndex++] = nums[i]; 
            }
        }

        return nonValIndex; // this returns the number of elements which are not val

        
    }
};
