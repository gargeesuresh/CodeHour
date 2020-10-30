// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* temp = head;
    
   map<SinglyLinkedListNode*,int> m;
    
    while(temp!=NULL)
    {
    
        if(m.find(temp) != m.end())
            return 1;
        
        m[temp]++;
        temp = temp->next;
    }
    return 0;

}
