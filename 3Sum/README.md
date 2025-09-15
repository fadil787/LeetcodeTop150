📌 Problem Statement  

Given an integer array nums, return all unique triplets [nums[i], nums[j], nums[k]] such that:  

    i != j, i != k, and j != k  
    nums[i] + nums[j] + nums[k] == 0  


The solution set must not contain duplicate triplets.  

🔎 Explanation & Approach  

This problem is basically an extension of Two Sum into Three Sum.  
We want:  

    n1 + n2 + n3 = 0  
    
Rearranging:  

    n2 + n3 = -n1  

So if we fix one number (n1), the problem reduces to Two Sum (find two numbers that add up to -n1).  

Steps:  

1. Sort the array  

    Sorting helps us avoid duplicates and apply the two-pointer technique efficiently.  

2. Iterate through each element (n1)  

    For each nums[i], treat it as n1.  

    Then, look for two numbers (n2, n3) such that:  

    nums[i] + nums[l] + nums[r] == 0  


Here, l is left pointer (i+1), and r is right pointer (n-1)(used i and j in the code).    

3. Apply Two-Pointer Search  
   
    If sum > 0 → decrease r (to reduce sum).  

    If sum < 0 → increase l (to increase sum).  

    If sum == 0 → we found a valid triplet.

4. Skip Duplicates  

    If the current nums[i] is the same as the previous one → skip it (to avoid duplicate triplets).  

    Similarly, skip duplicate values for l and r while moving pointers.



⏱️ Complexity Analysis  

    Sorting: O(n log n)  

    Outer loop (i): O(n)  

    Two-pointer scan: O(n) per i  

Total: O(n^2)  

Space: O(1) (ignoring result storage)  

This is optimal for this problem.  



HAPPY SOLVING!!




