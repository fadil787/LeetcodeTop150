📌 Problem Statement  

Design a data structure that supports the following operations in average O(1) time:  

Insert(val): Inserts an item val into the set if not already present.  
Remove(val): Removes an item val from the set if present.  
GetRandom(): Returns a random element from the set. Each element must have the same probability of being returned.  


💡 Intuition  

We need O(1) insert, remove, and getRandom.  
A hash map (unordered_map) gives O(1) insert/delete/search.  
A vector gives O(1) random access (for getRandom).  

By combining them:  
Use the vector to store elements.  
Use the map to store element → index mapping.  

For deletion, instead of removing an element directly from the middle of the vector (O(n)), we:  
Swap the element to be removed with the last element.  
Update the index of the last element in the map.  
Pop the last element in O(1).  


🛠️ Optimal Solution Approach:  

Insert(val)  

If val already exists in map, return false.  
Otherwise, push it into vector, record its index in map, return true.  

Remove(val)  

If val doesn’t exist, return false.  
Otherwise:  

Get index of val from map.  
Take the last element from vector.  
Put last element into val’s index in vector.  
Update last element’s index in map.  
Pop back the vector.  
Erase val from map.  

GetRandom()  

Generate a random index in [0, vec.size()-1].  
Return vec[randIndex].  


🧩 Complexity Analysis  

Time Complexity  

Insert → O(1) average  
Remove → O(1) average  
GetRandom → O(1)  

Space Complexity  
O(n) for storing up to n elements in both vector and hash map.  


HAPPY SOLVING!!  
