SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode* free_wala;
    
    if(head == NULL)
        return head;
    
    if(head->next!=NULL )
    {
        if(head->data == head->next->data)
        {
            free_wala = head->next;
            head->next = free_wala->next;
            free(free_wala);
            removeDuplicates(head);
        }
        else
           removeDuplicates(head->next);
    }
    return head;


}
