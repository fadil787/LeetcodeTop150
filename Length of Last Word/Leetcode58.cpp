class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int n=s.size();

        int i=n-1;
        while(i>=0 && s[i] == ' ') i--; //ignoring the trailing spaces

        while(i>=0 && s[i] != ' '){
            length++;
            i--;
        }

        return length;
        
    }
};
