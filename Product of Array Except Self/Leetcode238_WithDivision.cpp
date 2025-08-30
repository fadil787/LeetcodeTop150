class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int fullProduct = 1;
        int productWithoutZeros = 1;
        int countOfZeros = 0;
        vector<int>answer;

        for(int num:nums){
            fullProduct = fullProduct*num;
            if(num==0) countOfZeros++;
        }

        for(int num:nums){
            if(num==0) continue;
            productWithoutZeros = productWithoutZeros*num;

        }

        for(int num:nums){
            if(num!=0){
                if(countOfZeros>0) answer.push_back(0);  //there exist another zero, so product = 0
                else answer.push_back(fullProduct/num);  //no zeros
            }
            else{
                if(countOfZeros>1) answer.push_back(0);  //there exist other zeros other than this one
                else answer.push_back(productWithoutZeros); //only one zero, so return remaining product
            }
        }

        return answer;




        
    }
};
