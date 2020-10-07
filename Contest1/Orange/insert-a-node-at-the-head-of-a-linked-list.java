static SinglyLinkedListNode insertNodeAtHead(SinglyLinkedListNode list, int data) {
            SinglyLinkedListNode  node = new SinglyLinkedListNode(data);
            node.next=list;
        return node;             
    }
