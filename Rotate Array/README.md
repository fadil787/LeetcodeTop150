Problem Description  

You are given an integer array nums and an integer k.  
Rotate the array to the right by k steps, where k is non-negative. 


Brute Force Solution Explanation  

This is not actually a brute force - this is an efficient better solution that the interviewer will be satisfied. Hence, this can be considered as a solution that is better than brute.
Imagine you have a queue of people standing in a line.  
If you tell the last k people to move to the front, the lineup changes exactly like a "rotation".  

So, to rotate the array:  
First, store the last k elements safely aside (so they don’t get overwritten when we shift).   
Then, shift the first n-k elements forward by k steps.  
Finally, place the stored k elements at the front.  


Optimal Solution Explanation  

Rotating an array to the right by k steps means that the last k elements move to the front, while the first n-k elements shift back.  
If we could somehow "flip" the array in parts, we can achieve this efficiently.  

Steps for Reverse Method  

1.Reverse the entire array  
2.Reverse the first k elements  
3.Reverse the remaining n-k elements  

Example:  

nums = [1,2,3,4,5,6,7], k = 3  
Reverse entire array → [7,6,5,4,3,2,1]   
Reverse first 3 elements → [5,6,7,4,3,2,1]  
Reverse remaining 4 elements → [5,6,7,1,2,3,4]  

And we have our answer.  


Complexity Analysis  

Brute:  

Time Complexity:  
Copy last k elements → O(k)  
Shift first n-k elements → O(n-k)  
Place back stored elements → O(k)  
→ Overall: O(n)

Space Complexity:  
Temporary array of size k is used.  
→ O(k)    
Simple, intuitive, but needs extra space.  


Optimal:  

Time Complexity:  
Each reversal runs in linear time.  
Total work = O(n)  
→ Overall: O(n)  

Space Complexity:  
Reversals are done in-place (using swapping).  
→ O(1)   

Best solution: linear time, constant space.  

HAPPY SOLVING!!




