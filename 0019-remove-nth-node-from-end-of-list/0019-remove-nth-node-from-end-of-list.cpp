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
    int getsize(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int lstNode = getsize(head) - n;
        if(getsize(head)==n){
            return head->next;
        }
        int cnt = 1;
        while(curr!=NULL){
            if(cnt==lstNode){
                ListNode* del = curr->next;
                curr->next = del->next;
                del->next = NULL;
                delete del;
                break;
            }
            curr = curr->next;
            cnt++;
        }
        return head;
        
    }
};