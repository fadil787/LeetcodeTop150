class Solution {
public:
    int MAX_WIDTH;
    string getMyLine(int i, int j, int spacesInEachGap, int extraSpacesInGaps, vector<string>& words){
        string line = "";
        for(int k=i; k<j; k++){
            line += words[k];
            if(k==j-1) continue;

            for(int sp = 1; sp<=spacesInEachGap; sp++){
                line += " ";
            }
            if(extraSpacesInGaps > 0){
                line += " ";
                extraSpacesInGaps--;
            }
            
        }

        while(line.length()<MAX_WIDTH){
            line+=" ";
        }

        return line;

    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        MAX_WIDTH = maxWidth;
        int n = words.size();
        int i = 0;
        
        vector<string> result;

        while (i < n) {
            int j = i + 1;
            int letterCount = words[i].length();
            int numberOfGaps = 0;

            while (j < n &&
                   words[j].length() + 1 + letterCount + numberOfGaps <=
                       maxWidth) {
                letterCount += words[j].length();
                numberOfGaps++;
                j++;
            }

            int remainingSpaces = maxWidth - letterCount;

            int spacesInEachGap =
                numberOfGaps == 0 ? 0 : remainingSpaces / numberOfGaps;
            int extraSpacesInGaps =
                numberOfGaps == 0 ? 0 : remainingSpaces % numberOfGaps;

            if (j == n) {
                spacesInEachGap = 1;
                extraSpacesInGaps = 0;
            }

            result.push_back(
                getMyLine(i, j, spacesInEachGap, extraSpacesInGaps, words));
            i = j;
        }
        return result;
    }
};
