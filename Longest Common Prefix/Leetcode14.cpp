class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string output = "";
        sort(strs.begin(),strs.end());  //lexicographically sorted

        string first = strs[0];
        string last = strs[n-1];

        for(int i=0; i<first.length(); i++){
            if(first[i] == last[i]) output+=first[i];
            else break;
        }

        return output;
    }
};
