📝 Problem Description  

We are given a sorted integer array nums.  
We need to remove duplicates in-place so that each unique element appears only once.  

The function should return the number of unique elements.  
The first k elements of nums should contain the unique elements in order.  

💭 Brute Force Thought Process  

If I don’t think about efficiency, one way is:  
Traverse the array.  
Whenever I find a duplicate, remove it (using erase or shifting elements).  
Keep doing this until no duplicates remain.  
But this is very costly:  

Removing/shifting elements costs O(n) each time.  
If there are many duplicates, worst case = O(n^2).  

⚡ Optimal Solution Thought Process  

Since the array is already sorted, duplicates will always be next to each other.  
So I can avoid erasing and instead just overwrite the array in-place:  

Start with a pointer uniqueValIndex = 1 → this marks where the next unique element should go.  
Traverse the array from index 1 to n-1:  
Compare the current element nums[i] with the previous one nums[i-1].  
If they’re different → this means we found a new unique element.  
Place it at nums[uniqueValIndex], and increment uniqueValIndex.  
At the end, uniqueValIndex = total count of unique elements.  
This way, the first uniqueValIndex elements of nums contain all unique values.  
No extra array is used, and the rest of nums can be ignored.  

📊 Complexity Analysis
Brute Force  

Time Complexity: O(n^2) in worst case (shifting elements repeatedly).  
Space Complexity: O(1)  

Optimal Approach (Overwrite)  

Time Complexity: O(n) (single pass through the array)  
Space Complexity: O(1) (in-place, no extra array)   


HAPPY SOLVING!

