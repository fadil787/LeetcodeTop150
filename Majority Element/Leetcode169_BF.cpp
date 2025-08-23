class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size();

        for(int el:nums){
            freq[el]++;
        }

        for(int el:nums){
            if(freq[el]>(int)n/2){
                return el;
            }
           
        }
        return nums[0];
        
    }
};
