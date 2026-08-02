/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node){
        ListNode* Gnode = node;
        ListNode* prev = NULL;
        while(Gnode->next!=NULL){
            Gnode->val = Gnode->next->val;
            prev=Gnode;
            Gnode = Gnode->next;
        }
        prev->next = NULL;
        delete Gnode;
    }
};