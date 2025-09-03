📌 Problem Restatement  

We have two arrays:  

gas[i] → amount of fuel available at station i.  
cost[i] → fuel needed to travel from station i to station (i+1).  

We want to find the index of the starting gas station from which we can complete the entire circular route once, without running out of fuel. If it’s not possible, return -1.  

🔎 Intuition Behind Brute Force  

The simplest way to solve this is to try starting from each gas station one by one, and simulate the journey:   

1. If from that station we can travel around the circle and return back to it → that station is the answer.  

2. If we fail somewhere (not enough fuel to go to the next station), we discard that starting point and move to the next one.

⚙️ Approach (Brute)  

We begin with the first station and check if the fuel at that station (gas[i]) is at least enough to reach the next one (cost[i]). If not, we skip this station immediately.  

If it is possible to leave the station, we start simulating the journey around the circle:  

We maintain a variable currGas to keep track of how much fuel we currently have.  

Initially, currGas is set to the fuel left after traveling from the starting station to the next, plus the fuel collected at that next station.  

From there, we continue moving forward. At each new station j, we check whether currGas is enough to pay the travel cost cost[j].  

If it is, we deduct cost[j], add the fuel from the next station (gas[(j+1)%size]), and update currGas.  

If at any point currGas < cost[j], we stop immediately — this starting station fails.  

If the index j eventually loops back to the starting station i, that means we have successfully completed the entire circle, so we return i as the answer.  

If none of the stations succeed after simulating, we return -1.  


⏱️ Complexity

Time Complexity: O(n^2) (in the worst case, for each of the n starting stations we may simulate up to n steps).  

Space Complexity: O(1) (only currGas, j, and a few helpers).  

NOTE: Due to this complexity, this code will not be accepted as few test cases will cause the time limit to exceed. Hence we have to optimise.  


🔎 Optimal Approach(Greedy)  

Before simulating station by station, we first check the big picture:  

If the total gas available across all stations is less than the total cost required to travel the circle, it is impossible to complete the journey. In that case, we directly return -1.  

This simple check avoids wasted effort.  

1.Initialize Tracking Variables  

gasAvailable → keeps track of the running fuel balance as we move along the stations.  
answerIndex → stores the index of the station where we should try starting.  

2.Traverse the Stations  
For each station i:  

Update the current fuel balance:  
gasAvailable = gasAvailable + gas[i] - cost[i]  


If at any point gasAvailable becomes negative, it means the journey cannot be completed from the current starting station.  

Why? Because if you can’t even reach station i+1, then starting anywhere between the last candidate start and i would also fail.  

In this case, we reset:  

answerIndex = i + 1 (try the next station as the new candidate start).  

gasAvailable = 0 (we restart the fuel balance for the new journey).  

3.Return the Result

After traversing all stations, the answerIndex points to the station from which a successful journey is possible.  


⏱️ Complexity  

Time Complexity: O(n) — one pass through all stations.  

Space Complexity: O(1) — only uses a few variables (totalGas, totalCost, gasAvailable, answerIndex).  


HAPPY SOLVING!!
