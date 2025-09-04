class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tokens = "";
        string result = "";

        while(ss >> tokens){
            result = tokens+" "+result;
        }
        int n = result.size();
        return result.substr(0,n-1);
    }
};
