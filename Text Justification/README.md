🔹 Problem Statement  

You are given an array of words and a width maxWidth. Format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.  

Each line should contain as many words as possible.  

Extra spaces should be distributed as evenly as possible between words.  

If the number of spaces does not divide evenly, the left slots get more spaces than the right.  

The last line should be left-justified and filled with spaces at the end.  



🔹Approach  

This solution uses a greedy line-building strategy:  

1. Start from word i, expand to j while words fit in maxWidth.  

2. Calculate:  

letterCount: total characters of words in this line.  

numberOfGaps: number of spaces between words (j-i-1).  

remainingSpaces = maxWidth - letterCount.  

3. Compute:  

spacesInEachGap = remainingSpaces / numberOfGaps.  

extraSpacesInGaps = remainingSpaces % numberOfGaps.  

This ensures extra spaces are distributed from left to right.  

4. Special case: if it’s the last line → left-justified with 1 space between words.  

5. Use a helper getMyLine to construct each line, padding the end until length = maxWidth.

🔹 Key Insight  

The last word in a line must not be followed by spaces inside the loop.  

To handle this, we check if(k == j-1) continue; → prevents adding gaps after the last word.  

After constructing a line, trailing spaces are added if needed to reach exact maxWidth.  


🔹 Complexity Analysis

Time Complexity:  

Each word is visited once, and string concatenations are proportional to maxWidth.  

Overall: O(N × L), where N = number of words, L = maxWidth(Because you don’t just “count words” → you actually “write characters” (letters + spaces), and each line is forced to length L).    

Space Complexity:  

Only stores the result lines, no extra heavy data structures.  

O(N × L) for output.  


HAPPY SOLVING!!
