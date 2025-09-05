📌 Problem Statement  

You are given two strings — haystack and needle.  

Your task is to return the index of the first occurrence of needle in haystack. 

If needle is not present, return -1.  


🧠 Approach  

We use the naive/brute-force substring search method:  

Let:  

n = haystack.size()  

m = needle.size()  

We try every possible starting index i in haystack where needle can fit.  
That means i ranges from 0 to n - m.  

For each position i, compare characters of needle with the substring of haystack starting at i.  

Use another index j to traverse needle.  

If at any point haystack[i+j] != needle[j], stop and move to the next i.  

If we manage to match all m characters (j == m), we found the answer → return i.  

If no match is found after scanning, return -1.  


⏱️ Complexity Analysis  

Time Complexity:  

Worst case: O((n - m + 1) × m) ≈ O(n × m)  

Example worst case: haystack = "aaaaa....a", needle = "aaaab" (lots of repeated checks).  

Space Complexity:  

O(1) → we only use a few variables (i, j, n, m).  


HAPPY SOLVING!!
