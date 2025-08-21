PROBLEM DESCRIPTION 

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.  
The array nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored.  
Your task is to merge nums2 into nums1 as one sorted array in-place (without using extra space for another array).  


BRUTE FORCE APPROACH EXPLANATION  


Imagine you’re asked to combine two sorted lists of numbers (like two sorted decks of cards) into one bigger sorted list.  
You’re given:  
nums1 → which already has some numbers in sorted order, followed by empty space (zeros).  
nums2 → another sorted list.  
Your job → put everything into nums1, sorted.  

Step 1: Why make a copy?  

If you start directly changing nums1, you’ll mess up the original order while still needing to compare elements.  
So the safe move is:  
👉 Copy the elements of nums1 into a new array (nums1Copy).  
Now you have two clean sorted lists:  
nums1Copy   
nums2  

Step 2: Compare one by one (two pointers idea)  

Think of it like merging two lines of people sorted by height.  
You look at the front person in both lines.  
Whoever is shorter goes first into the merged line.  
Move that pointer forward.  
That’s what your loop does:  

i → walking through nums1Copy  
j → walking through nums2  
k → filling into the final nums1  

At each step:

If nums1Copy[i] <= nums2[j] → put nums1Copy[i] into nums1[k].  
Else → put nums2[j] into nums1[k].  
Move the pointer of the array you picked from.  

Step 3: Handle leftovers

After the loop, one of the arrays might still have people left in line.  
If nums1Copy still has numbers → just dump them into nums1. 
If nums2 still has numbers → dump them into nums1.  
Since both arrays are sorted, dumping works fine.  

Step 4: Done 🎉

Now nums1 has all the numbers merged in non-decreasing order.


COMPLEXITY ANALYSIS OF BRUTE FORCE APPROACH

Time Complexity (TC)
You still compare elements from both arrays (nums1Copy and nums2) once.  
Each element is processed at most once.  
👉 TC = O(m + n)  

Space Complexity (SC)
Since you copied the entire nums1, the extra space used is m + n.  
👉 SC = O(m + n)  

OPTIMAL APPROACH EXPLANATION

The trick here is:  
👉 Both arrays are sorted(THIS IS THE MAIN IDEA HERE).  
👉 nums1 has empty space at the end to hold everything.  
👉 If we start merging from the front, we’d overwrite elements we still need.  
👉 So instead, we merge from the back (end of the arrays).  

Step 1: Set up three pointers  

i = m - 1 → last valid element in nums1  
j = n - 1 → last element in nums2  
k = m + n - 1 → last index in nums1 (the place we should fill next)  

Step 2: Compare biggest elements  

Since both arrays are sorted:  
The largest remaining element must be at the end of either nums1 or nums2.  
Compare nums1[i] and nums2[j]:  
If nums1[i] >= nums2[j], put nums1[i] at position k.  
Otherwise, put nums2[j] at position k.  
Move the pointer (i or j) and also move k backwards.  
This way, we keep placing the largest element left into the right position, moving from the back towards the front.  

Step 3: Leftover handling  

If nums1 still has elements (i >= 0), they’re already in the right place → no action needed.  
If nums2 still has elements (j >= 0), copy them into nums1.  

Step 4: Done 🎉

Now nums1 contains all elements from both arrays, sorted, and we never used extra space.  

COMPLEXITY ANALYSIS OF OPTIMAL APPROACH 

Time Complexity: O(m + n) → each element is checked/placed once.  
Space Complexity: O(1) → in-place, no extra arrays used.  

HAPPY SOLVING!!
