class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueValIndex = 1; //this index keeps track of only the unique values
        int size = nums.size();
        for(int i=1; i<size; i++){
            if(nums[i] != nums[i-1]){
                nums[uniqueValIndex++] = nums[i];
            }
        }
        return uniqueValIndex; //returns number of unique values present in nums

        
    }
};
