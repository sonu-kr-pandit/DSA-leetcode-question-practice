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

    ListNode* SplitMid(ListNode* head){
        ListNode* slow = head;
         ListNode* fast = head;
          ListNode* prev = NULL;
          while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev != NULL){
            prev->next = NULL;
        }
        return slow;

    }

     ListNode* MergeSort( ListNode* Lhead ,  ListNode* Rhead){
        ListNode dummy(0);
        ListNode* tail = &dummy;
    
         ListNode* i = Lhead;
          ListNode* j = Rhead;
         while(i != NULL && j != NULL){

            if(i->val <= j->val){
                tail->next = i;
                i = i->next;
            }else{
                tail->next = j;
                j = j->next;
            }
            tail = tail->next;
        }
        while( i!= NULL){
            tail->next = i;
                i = i->next;
                tail = tail->next;
        }
        while(j !=  NULL){
            tail->next = j;
                j = j->next;
                tail = tail->next;
        }
        // return ans;

        // if(i != NULL) tail->next = i;
        // else tail->next = j;

        return dummy.next;
     }

    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next ==NULL){return head;}
         ListNode* Rhead = SplitMid(head);

          ListNode* left = sortList(head);
           ListNode* right = sortList(Rhead);

           return MergeSort(left , right);

        
    }
};