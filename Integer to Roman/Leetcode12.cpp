class Solution {
public:
    string intToRoman(int num) {
        static vector<int> value{
            1000, 900, 500, 400, 100, 90, 50,
            40,   10,  9,   5,   4,   1}; // static initiliased only once and
                                          // not for each function call
        static vector<string> symbol{"M",  "CM", "D",  "CD", "C",  "XC", "L",
                              "XL", "X",  "IX", "V",  "IV", "I"};

        
        string roman = "";
        int times;

        for(int i=0; i<13; i++){
            if(num==0) break;
            times = num/value[i];
            while(times--){
                roman+=symbol[i];
            }
            num%=value[i];
        
        }

        return roman;
    }
};
