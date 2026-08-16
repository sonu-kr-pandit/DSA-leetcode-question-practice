class MyCircularQueue {
        int *arr;
        int capacity;
        int currSize ;
        int front;
        int rare;
public:
    MyCircularQueue(int k) {
        capacity = k;
        arr = new int[capacity];
        currSize = 0;
        front = 0;
        rare = -1;
    }
    bool enQueue(int value) {
        if(currSize == capacity){
            return false;
        }
        rare = (rare + 1)%capacity;
        arr[rare] = value;
        currSize ++;
        return true;
    }
    bool deQueue() {
        if(currSize==0){return false;}
        front = (front + 1 )%capacity;
        currSize--;
        return true;
    }
    int Front() {
        if(currSize==0){return -1;}
        return arr[front];
    }
    int Rear() {
        if(currSize==0){return -1;}
        return arr[rare];
    }
    bool isEmpty() {
        if(currSize == 0){return true;}
        return false;   
    }
    bool isFull() {
        if(currSize == capacity){
            return true;
        }else{
            return false;
        }   
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */