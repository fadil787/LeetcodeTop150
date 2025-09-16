📝 Problem Statement  

Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray such that the sum is greater than or equal to target.  

If no such subarray exists, return 0.  


💡 Approach – Sliding Window (O(n))  

We use the two pointers technique (a.k.a. sliding window) to track a window [i … j]:  

🔹 Expand the window by moving j ➡️ and adding nums[j] to the current sum.  

🔹 When sum >= target, shrink the window from the left (i++) while keeping the condition true.  

🔹 Update the minimum length whenever a valid window is found.  

🔹 Continue until j reaches the end of the array.  


⏱️ Complexity Analysis  

Time: O(n) → Each element visited at most twice.  

Space: O(1) → Only a few variables used.  


HAPPY SOLVING!!
