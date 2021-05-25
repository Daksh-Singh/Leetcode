class MyLinkedList {
private:
    struct List
        {
            int val;
            List* next;
            List(int x) : val(x), next(NULL) {}
        };
    List* head;
    int length;

    
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
        length = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= length || index < 0)
            return -1;
        List* temp = head;
        for(int i = 0; i < index; i ++)
            temp = temp->next;
        return temp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        List* temp = new List(val);
        temp->next = head;
        head = temp;
        length ++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(length == 0)
            addAtHead(val);
        else
        {
            List* temp = head;
            List* temp1 = new List(val);
            for(int i = 0; i < length - 1; i ++)
                temp = temp->next;
            temp->next = temp1;
            length ++;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index <= 0)
            addAtHead(val);
        else if(index > length)
            return;
        else if(index == length)
            addAtTail(val);
        else
        {
            List* temp = head;
            List* temp1 = new List(val);
            for(int i = 0; i < index - 1; i ++)
                temp = temp->next;
            temp1->next = temp->next;
            temp->next = temp1;
            length ++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index < 0 || index >= length)
            return;
        if(index == 0)
            head = head->next;
        else 
        {
            List* temp = head;
            for(int i = 0; i < index - 1; i++)
                temp = temp->next;
            temp->next = temp->next->next;
            length --;
        }
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