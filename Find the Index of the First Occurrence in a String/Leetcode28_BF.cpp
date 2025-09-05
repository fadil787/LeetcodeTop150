class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i,j;

        for(i=0; i<=n-m; i++){ ///small optimisation 
            for( j=0; j<m; j++){
                if(haystack[i+j] != needle[j]) break;
            }
            if(j==m) return i;
            
        }

        return -1;
        
    }
};
