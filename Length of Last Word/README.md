📌 Problem Statement  

Given a string s consisting of letters and spaces, return the length of the last word in the string.  

A word is defined as a maximal substring consisting of non-space characters only.  

The string may contain trailing spaces.  

Example:  

"Hello World" → last word = "World" → length = 5  

" fly me to the moon " → last word = "moon" → length = 4  

"singleword" → last word = "singleword" → length = 10  


💡 Approach

1. Start from the end of the string:  

This allows us to skip trailing spaces efficiently without extra memory.  

2. Skip trailing spaces:  

Move the pointer left while s[i] == ' ' until you reach a non-space character or the start of the string.  

3. Count the last word:  

Continue moving left while s[i] != ' '.  

Increment a counter for each character encountered.  

4. Return the counter:  

This gives the length of the last word.  


⏱️ Complexity Analysis  

Time Complexity: O(n)  

We traverse the string from the end at most once.  

Space Complexity: O(1)  

Only a few integers are used. No extra arrays or strings.  


HAPPY SOLVING!!
