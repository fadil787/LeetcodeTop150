📘 Problem Statement  

Given a 1-indexed array of integers numbers sorted in non-decreasing order, find two numbers such that they add up to a specific target.  

Return the indices of the two numbers (1-indexed).  

Each input has exactly one solution, and you may not use the same element twice.  



🧠 Approach  

We use the two-pointer technique since the array is already sorted.  

1.Initialize two pointers:  

    left = 0 (start of array)  

    right = n - 1 (end of array)  

2.While left < right:  

    If numbers[left] + numbers[right] > target → move right--  

    If numbers[left] + numbers[right] < target → move left++  

    Else, return [left+1, right+1]  


⏱️ Complexity Analysis  

Time Complexity: O(n) → At most one pass over the array.  

Space Complexity: O(1) → Only two pointers are used.  

HAPPY SOLVING!!

