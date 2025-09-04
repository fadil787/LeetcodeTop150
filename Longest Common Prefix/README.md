📝 Problem Statement  

Given an array of strings, find the longest common prefix shared among all strings in the array.  

If there is no common prefix, return an empty string "".  

💡 Approach  
🔎 1. Sorting Trick  

Instead of comparing every string with every other one, we can take advantage of sorting:  

When we sort the array lexicographically, the strings that are most different will end up at the two ends (the first and the last).  

The longest common prefix of the entire array must also be the common prefix of just these two strings.  

So, we only need to compare:  

first = strs[0] (lexicographically smallest)  

last = strs[n-1] (lexicographically largest)  

🔗 2. Comparing First and Last  

Traverse both strings character by character.  

As long as the characters match, add them to the result.  

Stop at the first mismatch, since the prefix cannot continue beyond that point.  

👉 We only check up to the length of the first string, because:  

If there’s a mismatch, it will definitely appear within that range(because sorted lexicographically).  

If no mismatch occurs, then the whole first string is a prefix of the last string.  

⏱️ Complexity Analysis  

Time Complexity:  

Sorting: O(n log n) (where n is the number of strings).  

Comparing the first and last strings: O(m) (where m is the length of the shortest string).  

Overall: O(n log n + m)  

Space Complexity: O(1) (ignoring the output string).  

HAPPY SOLVING!!
