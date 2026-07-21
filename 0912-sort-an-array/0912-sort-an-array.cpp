class Solution {
public:
    void merge(vector<int> &nums, int si , int mid , int ei){
        int i =si , j = mid+1;
         vector<int> temp;

        while(i<=mid && j<=ei ){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){temp.push_back(nums[i++]);};
        while(j<=ei){temp.push_back(nums[j++]);};
    
        for(int k = 0; k < temp.size(); k++){
            nums[si + k] = temp[k];
        }
    }
    void MergeSort(vector<int> &nums , int si , int ei){
        if(si>=ei){return ;}
        int mid = si + (ei-si)/2;    
        MergeSort(nums , si , mid);
        MergeSort(nums ,mid+1 ,ei);
        merge(nums , si , mid , ei);
    }
    vector<int> sortArray(vector<int>& nums) {
        int si = 0 ;
        int ei = nums.size()-1;
        MergeSort(nums , si , ei);
        return nums;
        
    }
};


