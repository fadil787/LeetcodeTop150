class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = accumulate(gas.begin(), gas.end(), 0);
        int totalCost = accumulate(cost.begin(), cost.end(), 0);
        int n=gas.size();

        if(totalCost > totalGas) return -1;

        int answerIndex = 0;
        int gasAvailable = 0;

        for(int i=0; i<n; i++){
            gasAvailable = gasAvailable + gas[i] - cost[i];

            if(gasAvailable < 0){
                answerIndex = i+1;
                gasAvailable = 0;
            }
        }

        return answerIndex;


        
    }
};
