PROBLEM DESCRIPTION  

Given an array nums of size n, return the majority element.  
The majority element is the element that appears more than ⌊n / 2⌋ times.  
You may assume that the majority element always exists in the array.  

BRUTE FORCE SOLUTION EXPLANATION  

We count the frequency of each element using a HashMap.  
Traverse the array once and store nums[i] → frequency in the map.  
While updating, if the frequency of an element becomes greater than n/2, return that element immediately.  
Note that the code won't even enter the last return statement as the description confirmed the occurence of a majority element.

OPTIMAL SOLUTION EXPLANATION (BOYER-MOORE VOTING ALGORITHM)  

Think of scanning the array as running a tiny election:  
We keep a current candidate(first element) and a count of how far ahead it is(initially 1).  
When we see the same number as the candidate → count++ (our candidate gains a vote).  

When we see a different number → count--.  
This “decrement” is a pair-cancel: one vote for the candidate is canceled out by one vote for “everyone else”(in this case only 1 other).    
In other words, every decrement means some other candidate just gained one vote against ours.    
If a candidate’s lead ever drops to zero, we reset: the next number becomes the new candidate (we’re saying “if the previous frontrunner can be fully canceled by opposition, start fresh”).  
Because the true majority has more than half the votes, it cannot be completely canceled across the entire array; after all pair-canceling, it will still be the last one standing as the candidate.  


Boyer–Moore is the special case k = 2 (“more than n/2”).  
For the problem “find all elements that appear more than n/k times”:  
There can be at most (k − 1) such elements.  
Reason: If there were k of them, each > n/k, their total count would exceed n.  

COMPLEXITY ANALYSIS  

For Brute Force:  
Time Complexity:  

We iterate through the array once to populate the hashmap → O(n)  
Checking frequency also happens within the same loop → O(1) average (hash lookup).  
Total: O(n)  

Space Complexity:  

Extra space is required for storing counts of all distinct elements in the hashmap.  
Worst case (all elements different): O(n)  

For Optimal:  
Time Complexity:  

Single pass through the array → O(n)  

Space Complexity:  

Only two variables (candidate, count) are used → O(1)   

HAPPY SOLVING!



