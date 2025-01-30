// https://leetcode.com/problems/gas-station

int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int totalgas=0;
    int totalcost=0;

    int currentgas=0;
    int startindex=0;

    for(int i=0;i<gasSize;i++) {
        totalgas=totalgas + gas[i];
        totalcost=totalcost+cost[i];

        currentgas= currentgas + gas[i] - cost[i];

        if(currentgas<0) {
            startindex=i+1;
            currentgas=0;
        }
    }

    if(totalgas<totalcost) {
        return -1;
    }
    return startindex;
}