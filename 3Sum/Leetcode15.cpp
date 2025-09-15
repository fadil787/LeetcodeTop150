class Solution {
public:
    vector<vector<int>> result;

    void twoSum(vector<int>&nums, int target, int i, int j){
        while(i < j){
            if(nums[i] + nums[j] > target) j--;  //classic twoSum problem approach
            else if(nums[i] + nums[j] < target) i++;
            else{
                while(i < j && nums[i] == nums[i+1]) i++; //removing duplicates
                while(i < j && nums[j] == nums[j-1]) j--;
                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }


    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        result.clear(); // because it is declared as a global variable and
                        // needed to be cleared for each test case

        // we need triplets
        if (n < 3)
            return {};

        // sort : like 2sum II, as we can access the elements and not index;
        sort(nums.begin(), nums.end());
        int n1;
        int target;

        // n1 + n2 + n3 = 0 ----> (n2 + n3) = -n1;
        // fixing each element and finding other pair in remaning search space
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            n1 = nums[i];
            target = -n1; // so now we can apply two sum;

            twoSum(nums, target, i+1,n-1);
        }

        return result;
    }
};
