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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int cA = 0 , cB = 0;
        while(tempA != NULL ){
            tempA = tempA->next;
            cA++;
        }
        while(tempB != NULL){
            tempB = tempB->next;
            cB++;
        }

        ListNode* nTA = headA;
        ListNode* nTB = headB;

        if(cB > cA){
            for(int i = 0 ; i< abs(cA-cB) ; i++){
                nTB = nTB->next;
            }

        }else{
             for(int i = 0 ; i< abs(cA-cB); i++){
                nTA = nTA->next;
            }
        }

        while(nTA != NULL || nTB != NULL){
            if(nTA == nTB){
                return nTA;
            }
            nTA = nTA->next;
             nTB = nTB->next;

        }
        return NULL;

    }
};