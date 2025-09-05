class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> merge(numRows,"");

        int n=s.size();

        int i=0;
        while(i < n){
            for(int ind=0; ind<numRows; ind++){
                if(i < n){
                    merge[ind]+= s[i++];
                }
            }

            for(int ind=numRows-2; ind>0; ind--){
                if(i < n){
                    merge[ind] += s[i++];
                }
            }
        }

        string res="";
        for(string str:merge){
            res+=str;
        }

        return res;
        
    }
};
