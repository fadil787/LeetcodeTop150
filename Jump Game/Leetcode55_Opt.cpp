class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int farthest = 0;
        int finalDestination = nums.size() - 1;

        for(int i=0; i<size; i++){      
            if(i > farthest) return false; //which means that we have reached a place where we cannot(beyond farthest we can reach).
            
                farthest = max(farthest,nums[i]+i);
                if(farthest >= finalDestination) return true;
                
            
            
        }
        return false;
    }
};
