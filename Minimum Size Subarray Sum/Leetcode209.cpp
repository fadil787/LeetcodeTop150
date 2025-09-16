class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j=0;
        int n = nums.size();

        int sum = 0;
        int minLength = INT_MAX;
        int length;

      //sliding window approach

        while(j < n){
            sum += nums[j]; 
            while(sum >= target){
                length = j-i+1;  //length of the current window
                minLength = min(minLength,length);
                sum -= nums[i];  //subtract value at current i before incrementing
                i++;
                
            }
            j++;
           



        }

        if(minLength == INT_MAX) return 0;
        return minLength;
        
    }
};
