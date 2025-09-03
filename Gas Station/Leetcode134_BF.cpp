class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();

        for(int i=0; i<size; i++){
            if(gas[i] < cost[i]) continue;

            int j = (i+1)%size; // circular
            int costToGoNext = cost[i];
            int gasEarnedFromNext = gas[j];

            int currGas = gas[i]-costToGoNext + gasEarnedFromNext;
            
            while(j != i){
                if(currGas < cost[j]) break;
                int costToGoNextj = cost[j];
                int gasEarnedFromNextj = gas[(j+1)%size];

                j=(j+1)%size;
                currGas = currGas-costToGoNextj+gasEarnedFromNextj;
            }

            if(j == i) return i;

            
        }
        return -1;
        
    }
};
