class MyCircularQueue {
    vector<int> q;
    int front = -1, rear = -1, max;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) 
    {
        q.resize(k);
        max = k;   
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) 
    {
        if(rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if(((rear + 1) % max )== front)
            return false;
        else 
        {
            rear = (rear + 1) % max;
        }    
        q[rear] = value;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(front == -1)
            return false;
        else if(front == rear)
        {
            front = -1;
            rear = -1;
            return true;
        }
        else
        {
            front =  (front + 1) % max;
            return true;
        }  
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(front == -1)
            return -1;
        else
            return q[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(rear == -1)
            return -1;
        else
            return q[rear];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(rear == -1)
            return true;
        else
            return false;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if((rear + 1)% max == front)
            return true;
        else 
            return false;
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