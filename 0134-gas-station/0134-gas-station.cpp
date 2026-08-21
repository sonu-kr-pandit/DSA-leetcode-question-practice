class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();                         BRUTAL FORCE WITH TIME LIMIT EXCEED
        // int CurrGas=0;
        // for(int i = 0 ; i< n ; i++){
        //     if(gas[i]  < cost[i]){continue;}
        //     int j =( i+1 )%n;
        //     int GasEarn = gas[j];           //gas earn in next station j
        //     int GasCost = cost[i];       // cost for moving from this station
        //     CurrGas = gas[i] - GasCost + GasEarn;
        //     while(j!=i){

        //         if(CurrGas < cost[j]){break;}

        //         int costForMovingFromThisj = cost[j];

        //         j = ( j + 1 )%n;

        //         int gasEranInNextStationj = gas[j];

        //         CurrGas = CurrGas - costForMovingFromThisj + gasEranInNextStationj;

        //     }
        //     if(j == i ){return i;}
            
        // }

        // return -1;




        //method 2;

        int gasEarn = 0 , gasCost = 0;
        for(int i = 0 ; i< gas.size() ; i++){
            gasEarn += gas[i];
            gasCost += cost[i];
        }
        if(gasEarn < gasCost){return -1;}

        int resultIdx = 0 ; 
        int total = 0;
        for(int i =0 ; i< gas.size() ; i++){
            
            total += gas[i] - cost[i];

            if(total < 0){
                resultIdx = i+1;
                total = 0;


            }
        }
        return resultIdx;


        
        
    }
};