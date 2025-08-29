class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int left=0, right=0;
        int farthest = 0;
        int n=nums.size();

        while(right < n-1){
            for(int ind=left; ind<=right; ind++){
                farthest = max(farthest, nums[ind]+ind);
            }
            left = right+1;
            right = farthest;
            jumps++;
        }

        return jumps;
        
    }
};
