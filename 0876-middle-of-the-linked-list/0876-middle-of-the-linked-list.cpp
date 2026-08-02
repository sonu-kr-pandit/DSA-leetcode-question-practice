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

    int getMid(ListNode* head){
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        return n/2 + 1 ;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = getMid(head);
        int cnt = 1;
        ListNode* temp = head;
        while(temp!=NULL){
            if(cnt==mid){return temp;}
            temp = temp->next;
            cnt++;
        }
        return temp;

        
        
    }
};