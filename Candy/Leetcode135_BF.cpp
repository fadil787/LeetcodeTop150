class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> leftToRight(n,1);
        vector<int> rightToLeft(n,1);

        int candies = 0;
        for(int i=1; i<n; i++){
            if(ratings[i] > ratings[i-1]){
                leftToRight[i] = leftToRight[i-1] + 1;
            }
        }

        for(int i=n-2; i>=0; i--){
            if(ratings[i] > ratings[i+1]){
                rightToLeft[i] = rightToLeft[i+1] + 1;
            }
        }

        for(int i=0; i<n; i++){
            candies+=max(leftToRight[i],rightToLeft[i]);
        }

        return candies;
        
    }
};
