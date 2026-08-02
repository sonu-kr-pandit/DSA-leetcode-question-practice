/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        
        for(int j = 0; j < arr.size()/2; j++){
            if(arr[j] != arr[arr.size()-1-j]){
                return false;
            }
        }
        return true;
        
    }
};