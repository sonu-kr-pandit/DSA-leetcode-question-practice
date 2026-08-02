class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
        
    }
};


class MyLinkedList {
    Node* Head;
    Node* Tail;
    int size = 0;

public:
    MyLinkedList() {
        Head = NULL;
        Tail = NULL;
        size = 0;
    }
    
    int get(int index) {
        Node* temp = Head;
        int cnt = 0;
        while(temp !=NULL){
            if(cnt==index){
                return temp->data;
            }
            temp = temp->next;
            cnt++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
        }else{
            newNode->next = Head;
            Head = newNode;
        }
        size++;
        
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(Tail == NULL){
            Head = Tail = newNode;
        }else{
            Tail->next = newNode;
            Tail = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if( index > size ){return ;}
        if(index<= 0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        
        Node* temp = Head;
        for(int i = 0 ; i< index-1 ; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {                          
            Node* toDelete = Head;
            Head = Head->next;
            if (Head == NULL) Tail = NULL;
            delete toDelete;
            size--;
            return;
        }

        Node* temp = Head;
        for(int i = 0 ; i< index-1; i++){
            temp = temp->next;
        }
        Node* curr = temp->next;
        temp->next =  curr->next;
        if(curr==Tail){Tail = temp;}
        delete curr;
        size--;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */