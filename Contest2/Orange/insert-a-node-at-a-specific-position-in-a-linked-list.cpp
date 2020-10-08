
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    SinglyLinkedListNode* temp= new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next=NULL;
    if(position==1)
    {
        temp->next=head;
        head=temp;
        return head;
    }
    SinglyLinkedListNode* temp1=head;
    for(int i=0;i<position-1;i++)
        temp1=temp1->next;
    temp->next=temp1->next;
    temp1->next=temp;
    return head;
}
