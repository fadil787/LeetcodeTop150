class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;

        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;


        int n = s.size();
        int integer = 0;

        for(int i=0; i<n; i++){
            if((roman[s[i]] < roman[s[i+1]]) && i != n-1) integer -= roman[s[i]];
            else integer += roman[s[i]];
        }

        return integer;
        
        
    }
};
