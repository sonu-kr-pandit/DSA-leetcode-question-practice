class Solution {
public:
    // int part(vector<int>& nums, int si, int ei) {
    //     int randomIdx = si + rand() % (ei - si + 1);
    //     swap(nums[randomIdx], nums[ei]);
    //     int pivot = nums[ei];
    //     int i = si - 1;
    //     for (int j = 0; j < ei; j++) {
    //         if (nums[j] <= pivot) {
    //             i++;
    //             swap(nums[i], nums[j]);
    //         }
    //     }
    //     i++;
    //     swap(nums[i], nums[ei]);
    //     return i;
    // }
    int findKthLargest(vector<int>& nums, int k) {
        // int n = nums.size();
        // int si = 0;
        // int ei = n-1;
        // int tgt = n-k;
        // while(si<=ei){
        //     int pidx = part(nums , si , ei);
        //     if(pidx==k-1){
        //         nums[pidx];
        //     }
        //     else if(pidx>tgt){
        //        ei = pidx-1;
        //     }else{
        //         ei=pidx+1;
        //     }
        // }
        // return -1;
        priority_queue<int> pq;
        for (int& num : nums) {
            pq.push(num);
        }
        while (k != 1) {
            pq.pop();
            k--;
        }
        return pq.top();
    }

    // priority_queue<int> pq;
    // for(int &num : nums){
    //     pq.push(num);
    // }
    // while( k!=1){
    //     pq.pop();
    //     k--;
    // }
    // return pq.top();
};