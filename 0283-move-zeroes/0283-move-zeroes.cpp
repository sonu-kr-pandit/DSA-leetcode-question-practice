class Solution {
public:
    vector<int> swift(vector<int>& nums, int i) {
        while (i != nums.size() - 1) {
            swap(nums[i], nums[i + 1]);
            i++;
        }
        return nums;
    }
    void moveZeroes(vector<int>& nums) {
        for (int i = nums.size()-1; i >=0; i--) {
            if (nums[i] == 0) {
                swift(nums, i);
            }
        }
    }
};