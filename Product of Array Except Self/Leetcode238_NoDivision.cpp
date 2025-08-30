class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> left(size);
        vector<int> right(size);
        vector<int> answer(size);

        left[0] = 1;
        for (int i = 1; i < size; i++) {
            left[i] = left[i - 1] * nums[i - 1];  //finding cumulative product for left
        }

        right[size - 1] = 1;
        for (int i = size - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1]; //for right
        }

        for (int i = 0; i < size; i++) {
            answer[i] = left[i] * right[i];
        }

        return answer;
    }
};
