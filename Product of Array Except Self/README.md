Problem Statement:    

You are given an integer array nums of length n. Return an array answer such that:  
answer[i] = product of all elements in nums except nums[i]   

The constraint is that you must write an algorithm that runs in O(n) time and without using the division operator.  


Approach (with Division, Handling Zeros):  

The division operator is not allowed in the official problem statement.  
But in interviews, this is often asked as a follow-up, so it is important and intuitive to know this division-based solution before moving to the optimized approach  

Traverse the array once to calculate:  
fullProduct: product of all elements.  
productWithoutZeros: product of all non-zero elements.  
countOfZeros: number of zeros in the array.  

Based on countOfZeros, handle cases:  
If countOfZeros > 1 → All products will be 0.  
If countOfZeros == 1 → Only the position of zero will hold productWithoutZeros, all others will be 0.  
If countOfZeros == 0 → Normal case, compute fullProduct / nums[i] for each element.  

