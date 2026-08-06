/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;

        while(temp != NULL){
            if(temp->child != NULL){
                Node* nextNode = temp->next;

                Node* Chead = flatten(temp->child);
                temp->next = Chead;
                Chead->prev = temp;

                temp->child = NULL;


                Node* Ctail = Chead;
                while(Ctail->next != NULL){
                    Ctail= Ctail->next;
                }
                Ctail->next = nextNode;
                // nextNode->prev = Ctail;
                if(nextNode != NULL){
                    nextNode->prev = Ctail;
                    
                }
            }
            temp = temp->next;

        }
        return head;
        
    }
};