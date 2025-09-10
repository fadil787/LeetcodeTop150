class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;

        while (left < right) {
            if (numbers[left] + numbers[right] > target)
                right--; // sorted, so try with lesser value
            else if (numbers[left] + numbers[right] < target)
                left++; // try with bigger value
            else
                return {left + 1, right + 1};
        }
        return {};
    }
};
