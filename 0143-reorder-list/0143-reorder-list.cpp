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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next= prev;
            prev= curr;
            curr = next;
        }
        return prev;
        
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* Lhead =  reverseList(slow);

        ListNode* curr = head;

        while(Lhead != NULL  && Lhead->next != NULL){
            ListNode* temp = curr->next;
            ListNode* Rtemp = Lhead->next;

            curr->next = Lhead;
            Lhead->next = temp;

            curr = temp;
            Lhead = Rtemp;

        }
    }
};