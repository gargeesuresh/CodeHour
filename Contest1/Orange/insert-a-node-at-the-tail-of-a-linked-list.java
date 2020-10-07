static SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode head, int data) {
         SinglyLinkedListNode node =new SinglyLinkedListNode(data);
         SinglyLinkedListNode temp=head;
        if(head==null)
            head=node;
        else{
            while(temp.next!=null)
                temp=temp.next;
            temp.next=node;
        }
     return head;
        

    }
