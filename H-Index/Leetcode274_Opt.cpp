class Solution {
public:
    int hIndex(vector<int>& citations) {
        int hIndex = 0;
        int n=citations.size();

        sort(citations.begin(),citations.end(),greater<int>());


        for(int i=0; i<n; i++){
            if(citations[i] >= i+1) hIndex = i+1;
            else break;
            
        }

        return hIndex;
        
    }
};
