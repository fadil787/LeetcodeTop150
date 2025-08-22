PROBLEM DESCRIPTION  

You are given a sorted array nums.  
You need to remove duplicates in-place such that each unique element appears at most twice.  
The relative order of elements should be kept the same.  

Return the new length of the array after removal.  
Do not allocate extra space — you must do this using O(1) extra memory.  


OPTIMISED SOLUTION EXPLANATION  

The array is sorted, so duplicates will always be grouped together.  
We are allowed at most 2 copies of each number.  
The trick is to compare the current element nums[i] with the element two positions behind nums[uniqueValIndex-2].  
If they are different, it means this element can safely be added.  
If they are the same, it means adding nums[i] would create 3 duplicates, so we skip it.  
This ensures that no element appears more than twice in the modified array.  


⏱️ COMPLEXITY ANALYSIS  

Time Complexity: O(n)  
We iterate through the array once.  

Space Complexity: O(1)  
In-place modification, no extra data structures used.  

HAPPY SOLVING!
