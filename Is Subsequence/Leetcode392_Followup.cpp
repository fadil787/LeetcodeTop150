class Solution {
public:
    bool isSubsequence(string s, string t) {
        //code for the follow up question

        int m = s.length();
        int n = t.length();

        unordered_map<char, vector<int>> mp;

        for(int i=0; i<n; i++){
            mp[t[i]].push_back(i);
        }

        int prev = -1;
        for(int i=0; i<m; i++){
            if(mp.find(s[i]) == mp.end()) return false;

            vector<int> indices = mp[s[i]];

            auto it = upper_bound(indices.begin(), indices.end(), prev);
            if(it == indices.end()) return false;

            prev = *it;
        }

        return true;
        
    }
};
