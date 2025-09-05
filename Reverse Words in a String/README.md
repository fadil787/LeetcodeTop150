🔹 Problem Statement  

Given a string s, reverse the order of words.  

Words are separated by one or more spaces.  

The returned string should have no leading or trailing spaces, and words should be separated by a single space.  


🔹 Intuition  

We are asked to reverse words, not characters.  
That means:  

Extract each word.  

Reverse the order of words.  

Make sure the final string has no extra spaces.  


🛠 Approach 1: Using stringstream (Simple & Clean)  
Idea  

Use a stringstream to split words automatically (ignores multiple spaces).  

Insert each word at the front of the result string(so the last word comes at front and so on).  

Finally, remove the trailing space.  

Dry Run  

s = " the sky is blue "  

Extract "the" → result = "the "  

Extract "sky" → result = "sky the "  

Extract "is" → result = "is sky the "  

Extract "blue" → result = "blue is sky the "  

Remove last space → "blue is sky the"  


⏱ Complexity  

Time: O(n) (read words + build result).  

Space: O(n) (result + temporary tokens).  


🛠 Approach 2: Two-Pointers + In-place Reversal (Optimized)  
Idea  

Reverse the entire string.  

Now words appear in reverse order but letters are reversed too.  

Use two pointers (l, r) to process each word:  

Copy each word into position without extra spaces.  

Reverse each word back to correct order.  

Build the final answer with clean spaces.  


Dry Run  (try doing yourself)

s = " the sky is blue "  

Reverse whole string → "eulb si yks eht "  

Process words:  

"eulb" → reverse → "blue"  

"si" → "is"  

"yks" → "sky"  

"eht" → "the"  

Result = "blue is sky the"  

🔹 Variables Role  

1. i → reading pointer  

Scans through the original string character by character.  

Always moves forward.  

Helps us detect where each word starts/ends.  

2. r → writing pointer  

Writes characters into their correct position (without leading/trailing/extra spaces).  

Ensures that the final string is compact with only single spaces.  

3. l → start of current word  

Marks where the current word starts in the processed string.  

Used when we reverse each individual word back into proper order.  


⏱ Complexity  

Time: O(n) (each char reversed twice at most).  

Space: O(1) extra (in-place).  


HAPPY SOLVING!!
