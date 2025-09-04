🔹 Problem Statement  

You are given an array height where each element represents the height of a bar. Imagine these bars forming walls. After raining, some amount of water will get trapped between the bars.  

Your task is to calculate the total units of trapped water.  


🔹 Intuition(No Stack)  

Water can only be trapped at index i if there are taller (or equal) walls on both the left and the right.  

The water level above i will be decided by the shorter of the two walls:  

min(max height to the left, max height to the right)  


The trapped water at i is:  
 
water[i] = min(leftMax[i], rightMax[i]) - height[i]  


We just need to compute this for all indices and add it up.   

NOTE: Try drawing the diagram yourself for better understanding.  


🔹 Approach (using prefix & suffix arrays)  

1. Precompute left maximums  

leftMax[i] = tallest bar from 0 → i.  

Build this in a forward pass.  

2. Precompute right maximums  

rightMax[i] = tallest bar from i → n-1.  

Build this in a backward pass.  

3. Compute trapped water  

At each index i, water trapped = min(leftMax[i], rightMax[i]) - height[i].  (The width is given as 1)

Add this to the total.  

🔹 Complexity  

Time: O(n) – Three passes (left max, right max, total water).  

Space: O(n) – Two extra arrays (leftMax, rightMax).  


HAPPY SOLVING!!


