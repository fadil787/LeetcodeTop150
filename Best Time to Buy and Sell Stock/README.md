Problem Description  

You are given an array prices where prices[i] is the price of a given stock on the i-th day.  
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.  
Return the maximum profit you can achieve from this transaction. If no profit is possible, return 0.  


Brute Force Approach Explanation  

Imagine you are checking every possible pair of days:  
On day i, you buy the stock.  
On day j > i, you sell the stock.  
Calculate the profit = prices[j] - prices[i].  
Keep track of the maximum profit across all pairs.  
This way, you are trying all possibilities of "buy then sell" and selecting the best one.  

Very simple to think of, but not efficient for large inputs.  



Optimal Solution Explanation 

while scanning once from left to right, keep just two things:  
buyPrice → the minimum price so far (best day to have bought up to now)  
maxProfit → the best profit seen so far  

At each day:  
If today’s price is lower than buyPrice, update buyPrice (found a better buying day).  
Otherwise, compute potential profit prices[i] - buyPrice and update maxProfit if it’s better.  
That’s it—no need to try every pair.  


Complexity Analysis  

Brute:  

Time Complexity:  
Outer loop runs n times.  
Inner loop runs up to n times for each i.  
→ O(n²)  
Therefore, this solution will not get accepted for all the test cases. However this is the first thought that you can explain to the interviewer.

Space Complexity:  
Only a few variables (curr_profit, max_profit).  
→ O(1)  


Optimal:  

Time Complexity:  
Single scan over array → O(n)  

Space Complexity:  
Only a few variables (buyPrice, currProfit, maxProfit).  
→ O(1)  

HAPPY SOLVING!!
