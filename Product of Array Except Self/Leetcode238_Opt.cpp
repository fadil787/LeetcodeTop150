class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int size = nums.size();

        vector<int> answer(size);

        answer[0] = 1;
        for (int i = 1; i < size; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        int rightProduct = 1;
        for (int i = size - 1; i >= 0; i--) {
            answer[i] = answer[i] * rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
    }
};
