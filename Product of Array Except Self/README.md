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

Here, the time complexity is O(n). However we are not supposed to use division.



Approach Without Division:  

The key idea:  
👉 The product of all numbers except nums[i] can be broken down into two parts:  

Product of all elements to the left of i  
Product of all elements to the right of i  

answer[i] = (product of elements before i) × (product of elements after i)  

Step 1: Compute prefix products (left array)  
left[i] stores the product of all elements before index i.  
Initialize left[0] = 1 (since there are no elements before the first element).  
Fill left[i] = left[i-1] * nums[i-1].  

Step 2: Compute suffix products (right array)  
right[i] stores the product of all elements after index i.  
Initialize right[n-1] = 1 (since there are no elements after the last element).  
Fill right[i] = right[i+1] * nums[i+1].  

Step 3: Build the result  
For each index i, the answer is simply:  
answer[i] = left[i] * right[i]  

Here, the time complexity is again O(n) and we have not used division(The problem is solved).  
However we have used extra space and the complexity is O(n).  

We have to come up with a solution that uses no extra space.  


Optimal Approach Explanation:  

To solve this, we use the idea of prefix and suffix products, but instead of keeping two separate arrays, we combine everything into the final result array.  

👉 Think of the product at answer[i] as:  
answer[i] = (product of elements before i) × (product of elements after i)  

Step 1: Build prefix products  
Traverse left to right.  
At each index i, store the product of all elements to the left of i.  
Initialize answer[0] = 1 (since nothing exists on the left of the first element).  

Example for nums = [1, 2, 3, 4]:  
answer after prefix pass → [1, 1, 2, 6]  

Step 2: Multiply with suffix products  
Traverse from right to left.  
Maintain a variable rightProduct to store the product of elements to the right of i.  
Update each answer[i] as:  

answer[i] = answer[i] * rightProduct  

Update rightProduct *= nums[i] as you move left.  

Example for nums = [1, 2, 3, 4]:  
Start with rightProduct = 1  
Iterating backwards updates:
answer = [24, 12, 8, 6]  

Complexity Analysis:  

Time Complexity: O(n) (two passes over the array).  

Space Complexity: O(1) extra (ignoring the output array).  

HAPPY SOLVING!!







