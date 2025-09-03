📌 Problem Restatement  

We have n children standing in a line, each with a rating value. We need to distribute candies such that:  

Every child has at least one candy.  
A child with a higher rating than their neighbor gets more candies.  

The task is to return the minimum number of candies required to satisfy these rules.  


🔎 Approach (Two-Pass Greedy)  

The solution is built around two sweeps across the ratings array — one from left to right, and another from right to left.  

1. Initialization  

Create two arrays:  

leftToRight[i] → candies required when comparing with the left neighbor.  
rightToLeft[i] → candies required when comparing with the right neighbor.  

Initialize both with 1 for all children (since every child gets at least one candy).  

2. Left-to-Right Pass  

Traverse from the second child to the end.  

If a child i has a higher rating than child i-1, assign them leftToRight[i-1] + 1 candies.  

This ensures that ratings increasing from the left are respected.  

3. Right-to-Left Pass  

Traverse from the second-to-last child back to the first.  

If a child i has a higher rating than child i+1, assign them rightToLeft[i+1] + 1 candies.  

This ensures that ratings increasing from the right are respected.  

4. Combine Results

For each child i, the true requirement is the maximum of both passes:  

candies[i] = max(leftToRight[i], rightToLeft[i])  


This guarantees that both left and right neighbor conditions are satisfied.  

5. Total Candies

Sum all candies[i] to get the final answer.  

⏱️ Complexity  

Time Complexity: O(n) → Two sweeps and one final sum pass.  

Space Complexity: O(n) → Two extra arrays (leftToRight and rightToLeft).  


🍬 Optimal Approach (Greedy, slope counting)  

Instead of maintaining extra arrays, track increasing and decreasing slopes in ratings:  

Start with each child having 1 candy.  

Traverse through ratings once (while loop).  

When ratings increase:  

Count the slope (peak), and keep adding extra candies for each step upward.  

When ratings decrease:  

Count the slope (dip), and keep adding candies accordingly.  

To handle the overlap at the "peak" (where both increasing and decreasing sequences meet), subtract min(peak, dip) once (since that child was counted in both slopes).  

Example Walkthrough  

Input:  
ratings = [1, 2, 3, 2, 1]  

Start with 5 candies (1 per child).  

Increasing slope (1 → 2 → 3):  

Give extra candies: +1, +2.  

Decreasing slope (3 → 2 → 1):  

Give extra candies: +1, +2.  

Adjust overlap at peak (rating = 3): subtract min(peak=2, dip=2) = 2.  

Total Candies = 9.  


⏱️ Complexity  

Time: O(n) (single pass)  

Space: O(1) (no extra arrays, just counters)  

HAPPY SOLVING!!
