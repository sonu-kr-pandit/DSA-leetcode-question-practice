class Solution {
public:
    int leastInterval(vector<char>& task, int n) {
        vector<int> mp(26 , 0);

        for(char &ch : task){
            mp[ch-'A']++;
        }

        sort(mp.begin() , mp.end());

        int maxFreq = mp[25];
        int holes = maxFreq -1;
        int idleSlots = n*holes;

        for(int i = 24 ; i>=0 ; i--){
            idleSlots -= min(mp[i] , holes);
        }

        if(idleSlots > 0){
            return task.size() + idleSlots;
        }
        return task.size();
        
    }
};