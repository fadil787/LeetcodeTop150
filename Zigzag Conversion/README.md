🔹 Problem  

We are asked to take a string s and arrange its characters in a zigzag pattern across numRows.  

Finally, we must read the characters row by row to form the result.  


🔹 Idea  

Think of writing characters row by row, going:  

1. Straight down from top row to bottom row  

2. Then diagonally up until we reach the second row.  

3. Repeat until the entire string is placed.  

We store characters row-wise in a helper vector merge, where:  

merge[0] → characters of row 0  

merge[1] → characters of row 1  

merge[2] → characters of row 2  
... and so on.  

At the end, we concatenate all rows to get the zigzag string.  


🔹 Example Walkthrough  

s = "PAYPALISHIRING"  
numRows = 3  

Step 1: Initialization  

merge = ["", "", ""]  
i = 0  


Step 2: First cycle of the while loop  

Vertical down  

Row 0 → merge[0] = "P"  

Row 1 → merge[1] = "A"  

Row 2 → merge[2] = "Y"  

Diagonal up  

Row 1 → merge[1] = "AP"  

merge = ["P", "AP", "Y"]  

Step 3: Second cycle  

Vertical down  

Row 0 → merge[0] = "PA"  

Row 1 → merge[1] = "APL"  

Row 2 → merge[2] = "YI"  

Diagonal up  

Row 1 → merge[1] = "APLS"  

merge = ["PA", "APLS", "YI"]  


Step 4: Continue until end  

merge[0] = "PAHN"  
merge[1] = "APLSIIG"  
merge[2] = "YIR"  


Step 5: Concatenate rows  

res = merge[0] + merge[1] + merge[2]  
    = "PAHN" + "APLSIIG" + "YIR"  
    = "PAHNAPLSIIGYIR"  

✅ Final Answer.  

🔹 Key Takeaways  

merge is just a bucket for each row.  
 
The down loop fills rows 0 → numRows-1.  

The up loop fills rows numRows-2 → 1.  

Finally, we join all rows to form the result.  

This way we simulate the zigzag writing pattern row by row.  


📌 Time Complexity  

Time Complexity: O(n)  

Space Complexity: O(n)  


HAPPY SOLVING!!
 




