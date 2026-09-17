class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> nums;
        if(x >= 0 && x<=9){return true;}
        if(x<0 ){return false;}
        while(x!=0){
            int ld = x%10;
            nums.push_back(ld);
            x = x/10;
        }
        int st = 0 , end = nums.size() -1;
        while(st<=end){
            if(nums[st] != nums[end]){
                return false;
            }
            st++;
            end--;
        }

        return true;
        
    }
};