🔹 Problem Statement  

You are given an integer array nums where each element represents the maximum jump length from that position.  
Determine if you can reach the last index starting from the first index.  

Input: nums = [2,3,1,1,4]  
Output: true (You can jump 2 → 3 → 4)  

Input: nums = [3,2,1,0,4]  
Output: false (You get stuck at index 3)  

🔹 Intuition / Approach for Optimal Solution  

We can solve this problem greedily:  
Keep track of the farthest index we can reach so far.  

Iterate through the array:  
If the current index i is beyond the farthest reachable index, we cannot move further → return false.  
Otherwise, update the farthest reachable index:  

farthest = max(farthest, i + nums[i])  


If farthest reaches or exceeds the last index, return true.  
The key idea:  

At every step, check whether the current position is reachable.  
Always update the farthest point we can go from the current index we are at.


🔹 Complexity Analysis  

Time Complexity: O(n) → Single pass through the array.  
Space Complexity: O(1) → Only a few variables are used.  

HAPPY SOLVING!!
