📝 Problem Statement  

Given two strings s and t, return true if s is a subsequence of t, otherwise return false.  

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters.  


🔹 Approach 1: Two Pointers (Greedy)  

👉 Best when we only need to check one query (s against t).  

⚙️ Algorithm  

1. Use two indices i (for s) and j (for t).  

2. Traverse t, and whenever t[j] == s[i], increment i.  

3. If by the end i == s.length(), return true.  

⏱ Complexity  

Time: O(n) where n = len(t)  

Space: O(1)  



🔹 Approach 2: Preprocessing + Binary Search(FOLLOW UP)  

👉 Useful when we need to check multiple queries of s against the same t.  

⚙️ Algorithm  

1. Preprocess string t by storing the indices of each character in a hashmap:
   { 'a': [0, 5], 'b': [2], 'c': [7], ... }

2.  For each character in s, use binary search to find the next occurrence after the previous matched index.  

3. If any character can’t be matched, return false.


⏱ Complexity  

Preprocessing: O(n)  

Query (checking s): O(m log n), where m = len(s), n = len(t)  

Space: O(n)  


EXPLANATION OF TC:  

Step 1: Preprocessing t  

  We loop once over t and store positions → O(n).  

  Each insertion into a vector is amortized O(1).  

Step 2: Checking Subsequence s  

  For each character in s (total m):  

  We do a lookup in the hashmap → O(1) average.  

  Then we run upper_bound on that character’s index list.  

  Suppose character c appears k times in t.  

  upper_bound runs in O(log k)(INTERNALLY USES BINARY SEARCH).  

  Worst case, k could be as large as n (if all characters are the same).  

  So per character → O(log n) in the worst case.  

➡️ Total = O(m log n)  


HAPPY SOLVING!!  
