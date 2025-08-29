📌 Problem: H-Index  

The H-Index is a metric used to measure the productivity and impact of a researcher’s publications.  
A researcher has an H-Index = h if:  

They have at least h papers with ≥ h citations each, and  
The remaining papers have ≤ h citations each.  


Optimal Approach Explanation:     

We sort the array so that the paper with the highest citations comes first.  
So as we iterate through the array, at index 0(which means paper 1), we check if the citation value is greater than or equal to 1.  
If yes, it means that we have 1 paper which has at least 1 citation. (Therefore the current H-Index is 1).  

For the next index(paper number 2), if the citation value is greater than 2(i+1 in the code), it means that we have 2 papers which have citations >= 2.    

The key part is that the array is sorted in descending order so the previous paper definitely has more citation than the current one.  
So when we reach an index(paper number) where the citation value is not greater than the paper number, we break out of the loop and return the current H-Index.  

Better Structured Explanation:   

We first sort the array in descending order so that the paper with the highest number of citations comes first.  
At index 0 (which represents paper 1), we check if the citation count is at least 1.  
If yes, this means we have 1 paper with at least 1 citation, so the H-Index becomes 1.  

At index 1 (paper 2), we check if the citation count is at least 2.  
If yes, this means we have 2 papers with at least 2 citations, so the H-Index becomes 2.  

Similarly, at index i, we check if the citation count is at least i+1.  
If it holds true, we can safely increase the H-Index.  

The important part is that because the array is sorted in descending order, every earlier paper has citations greater than or equal to the later ones. This ensures that once the condition fails, it will continue to fail for all subsequent papers.  
Thus, as soon as we find a paper where the citations are less than the paper number, we stop and return the current H-Index.  

🔎Dry Run for Better Understanding  
 
Let’s take an example citations array:  
citations = [3, 0, 6, 1, 5]  

Step 1 – Sort in descending order  
citations = [6, 5, 3, 1, 0]  
We sort because we want to check papers with the highest citations first.  

Step 2 – Iterate and check condition  
Index 0 → Paper 1  
citations[0] = 6  
Is 6 >= 1? ✅ Yes → h-index = 1  

Index 1 → Paper 2  
citations[1] = 5  
Is 5 >= 2? ✅ Yes → h-index = 2  

Index 2 → Paper 3  
citations[2] = 3  
Is 3 >= 3? ✅ Yes → h-index = 3  

Index 3 → Paper 4  
citations[3] = 1  
Is 1 >= 4? ❌ No → Stop  

Final H-Index = 3  

Notice how sorting ensures that once a paper fails the condition, all following papers will also fail (because they have fewer citations).  


Complexity Analysis   

Idea: Sort citations in descending order and check conditions directly.  

Time Complexity:  
Sorting → O(n log n)  
Iteration → O(n)  
Overall → O(n log n)  

Space Complexity:  
Sorting usually takes O(1) (if done in-place).  

So overall → O(1) auxiliary space.  


HAPPY SOLVING!!

