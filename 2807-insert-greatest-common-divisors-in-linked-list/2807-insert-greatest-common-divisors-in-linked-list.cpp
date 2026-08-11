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
    int GCD(int m , int n ){
        while(n!=0){
            int temp = n;
            n  = m%n;
            m = temp;
        }
        return m;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* Felement = head;
        ListNode* selement = head->next;
        while(selement != NULL){
            ListNode* NewNode = new ListNode(GCD(Felement->val , selement->val));
            Felement->next = NewNode;
            NewNode->next = selement;
            Felement = selement;
            selement = selement->next;
        }
        return head;
        
    }
};