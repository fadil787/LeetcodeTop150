class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueValIndex = 2;
        int size = nums.size();

        if(size <= 2) return size;

        for(int i=2; i<size; i++){
            if(nums[i] != nums[uniqueValIndex-2]){
                nums[uniqueValIndex++] = nums[i];
            }
        }

        return uniqueValIndex;
        
    }
};
