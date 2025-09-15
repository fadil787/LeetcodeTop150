📌 Problem Statement  

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the i-th line are at (i, 0) and (i, height[i]).  

Find two lines that, together with the x-axis, form a container such that the container contains the most water.  

Return the maximum amount of water a container can store.  


🔎 Approach  

We use the two-pointer technique:  

1. Start with two pointers: one at the beginning (h1 = 0) and one at the end (h2 = n-1).  

2. Calculate the current area:  

    width = h2 - h1  

    height = min(height[h1], height[h2])  

    area = width * height  

3. Update maxArea.

4. Move the pointer corresponding to the smaller height (because the limiting factor is the smaller line).

5. Repeat until h1 crosses or reaches h2.


⏱️ Time Complexity: O(n)  

📦 Space Complexity: O(1)  


HAPPY SOLVING!!
