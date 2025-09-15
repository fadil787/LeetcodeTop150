class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int h1 = 0;
        int h2 = n-1;
        int currArea = 0;
        int maxArea = 0;


        while(h1 < h2){
            int width = h2-h1;
            currArea = width * min(height[h1],height[h2]);
            maxArea = max(maxArea, currArea);

            if(height[h1] > height[h2]) h2--;
            else h1++;

        }

        return maxArea;
        
    }
};
