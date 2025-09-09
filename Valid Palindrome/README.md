🔹 Problem  

Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.  

🔹 Approach (Two Pointers – Opposite Ends)  

1. Use two pointers:  

    i starting at the left,  

    j starting at the right.  

2. Skip non-alphanumeric characters with isalnum.  

3. Compare characters in lowercase (tolower).  

    If mismatch → return false.  

4. Move inward (i++, j--).  

5. If the whole string passes, return true.



🔹 Complexity  

Time: O(n) → each character checked at most once.  

Space: O(1) → done in-place, no extra string needed.  


HAPPY SOLVING!!
   
   
