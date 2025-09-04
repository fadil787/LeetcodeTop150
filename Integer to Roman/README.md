📌 Problem Statement  

You are given an integer num (1 ≤ num ≤ 3999).  

Convert it into a Roman numeral and return the result as a string.  

Special cases use the subtractive rule (placing smaller values before larger ones):  

IV = 4 (5 - 1)  

IX = 9 (10 - 1)  

XL = 40 (50 - 10)  

XC = 90 (100 - 10)  

CD = 400 (500 - 100)  

CM = 900 (1000 - 100)  


💡 Approach  

We use a greedy method:  

Maintain two arrays:   

value → Roman numeral values in descending order  

symbol → Corresponding Roman symbols  

Iterate through the arrays:  

Find how many times the current value fits into num  

Append the corresponding symbol that many times  
 
Reduce num using modulo (num %= value[i])  

Stop once num == 0.  

⏱️ Complexity Analysis  

Time Complexity:  
Each Roman numeral is formed in a constant number of iterations (≤ 13).  
→ O(1)  

Space Complexity:  

Arrays value and symbol are marked static → initialized once only.  

Only extra string roman is used.  
→ O(1)  


HAPPY SOLVING!!


 
