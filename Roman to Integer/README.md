🔹 Problem Statement  

Given a string s representing a Roman numeral, convert it into its integer value.  

🔹 Roman Numeral Rules  

Roman numerals are generally written largest to smallest (e.g., VI = 6, XV = 15).  

But when a smaller value comes before a larger value, it means subtraction (e.g., IV = 4, IX = 9, XL = 40).  


🔹 Approach  

1. Map Roman numerals to integers  

Use a hash map (unordered_map<char, int>) to store the values of I, V, X, L, C, D, M.  

2. Iterate through the string  

For each character s[i], compare it with the next character s[i+1].  

If s[i] < s[i+1], it means this numeral should be subtracted (like IV, where I < V).  

Otherwise, add its value normally.  

3. Accumulate the total  

Keep a running total integer.  

Add or subtract based on the rule above.  

🔹 Complexity  

Time: O(n) – one pass through the string.  

Space: O(1) – fixed-size hash map.  

The extra memory we use is the unordered_map<char,int> which holds only 7 fixed entries:  

I, V, X, L, C, D, M  


No matter how long the input string s is, this map never grows — it always stores exactly 7 items.  

Apart from the map, we just keep a few variables (n, integer, i) which are constant.  

So the extra memory does not depend on the input size n.  
That’s why the space complexity is constant → O(1).  

HAPPY SOLVING!!
