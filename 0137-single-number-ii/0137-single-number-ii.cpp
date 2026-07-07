class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int k = 0 ; k<32 ; k++){
            int Cone = 0;
            int temp = (1<<k);
            for(int &num : nums){
                if((num&temp)==0){
                    
                }else{
                    Cone++;
                }

            }
            if(Cone%3==1){
                result = (result | temp);
            }

        }
        return result;
        
    }
};