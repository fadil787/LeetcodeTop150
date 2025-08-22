📝 Problem Description

We are given an integer array nums and an integer val.  
We need to remove all occurrences of val in-place.  

The function should return the new length of the array after removing val.  
The first k elements of nums should contain the elements that are not equal to val.  
The order of the elements can be changed, but it’s not mandatory.  

💭 Brute Force Thought Process

If I don’t think about efficiency, one way is:  
Traverse the array.  
Every time I see an element equal to val, I remove it (e.g., using erase in C++ or shifting elements manually).  
This keeps shrinking the array until no val remains.  
But this is very costly:  

Removing/shifting elements in an array is O(n) per operation.  
If val occurs many times, worst case complexity becomes O(n^2).  
So brute force is not efficient here.  

⚡ Optimal Solution Thought Process  

Instead of deleting elements one by one, I can just overwrite the elements in-place.  
Maintain a pointer (nonValIndex) that tracks where the next non-val element should go.  
Traverse the array from start to end:  
If the current element is not equal to val, copy it into nums[nonValIndex] and increment nonValIndex.  
At the end, nonValIndex tells me how many elements are left after removal.   
This way, all valid (non-val) elements are shifted to the front of the array, and we don’t care what’s beyond the returned length.

📊 Complexity Analysis
Brute Force  
Time Complexity: O(n^2) (due to shifting/removing multiple times)  
Space Complexity: O(1) (no extra space used)

Optimal Approach (Overwrite Method)  
Time Complexity: O(n) (single pass through the array)  
Space Complexity: O(1) (in-place, no extra array used)  

HAPPY SOLVING!




